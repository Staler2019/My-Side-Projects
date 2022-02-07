#include "FirstSet.h"

bool FirstSet::isTerminal(string &str)
{
    if (terminals.find(str) != terminals.end())
        return true;
    return false;
}
void FirstSet::makeFirstSet()
{
    for (auto it = rules.begin(); it != rules.end(); it++) {
        makeFirstSetDfs(it->first);
        cerr << endl;
    }
}
set<string> FirstSet::makeFirstSetDfs(string c)
{
    cerr << c << "--";
    if (isTerminal(c)) {
        cerr << c;
        return set<string>({c}); // different from getTerminalSet directly to exit(0)
    }
    else { // nonterminal
        if (first.find(c) != first.end())
            return first[c];
        else { // this nonterminal not find in "first" map
            // cerr << "...creating firstSet...";
            vector<string> &vstr = rules[c]; // finding element(change from char to string)
            set<string> tmp;
            for (auto it = vstr.begin();; it++) {
                do {
                    cerr << *it;
                    set<string> foundSet = makeFirstSetDfs(*it);
                    // cerr << "...back" << *it << "...";
                    it++;
                    // cerr << "\"" << *it << "\"";
                    if (it == vstr.end() || *it == "|") { // production not found here
                        it--;
                        // cerr << "\"\"" << *it << "\"\"";
                        tmp.insert(foundSet.begin(), foundSet.end());
                        break;
                    }
                    else {
                        if (foundSet.find(";") != foundSet.end()) {
                            // it--; // continue the it counter
                            foundSet.erase(";");
                            tmp.insert(foundSet.begin(), foundSet.end());
                        }
                        else { // ';' not found in this set, end production
                            it--;
                            // cerr << "\"" << *it << "\"";
                            tmp.insert(foundSet.begin(), foundSet.end());
                            break;
                        }
                    }
                } while (1);
                it = find(it, vstr.end(), "|");
                if (it == vstr.end())
                    break;
                cerr << "\t";
            }
            first[c] = tmp;
            return tmp;
        }
    }
}
FirstSet::FirstSet(map<string, vector<string>> &rules, set<string> &terminals) : rules(rules), terminals(terminals)
{
    makeFirstSet();
}
// FirstSet::FirstSet(const FirstSet &that)
// {
// }
map<string, set<string>> FirstSet::getFirstSet()
{
    return this->first;
}
map<string, vector<string>> FirstSet::getRules()
{
    return this->rules;
}
set<string> FirstSet::getTerminals()
{
    return this->terminals;
}
FirstSet &FirstSet::operator=(const FirstSet &that)
{
    return *this;
}
