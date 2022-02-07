#ifndef _FIRST_SET_H_
#define _FIRST_SET_H_

#include <bits/stdc++.h>
using namespace std;

class FirstSet {
  private:
    set<string> terminals;
    map<string, vector<string>> rules;
    map<string, set<string>> first;
    bool isTerminal(string &str);
    void makeFirstSet();
    set<string> makeFirstSetDfs(string c);

  public:
    // FirstSet();
    FirstSet(map<string, vector<string>> &rules, set<string> &terminals);
    // FirstSet(const FirstSet &that); // copy constructor
    map<string, set<string>> getFirstSet();
    map<string, vector<string>> getRules();
    set<string> getTerminals();
    FirstSet &operator=(const FirstSet &that); // assignment operator
};

#endif //!_FIRST_SET_H_