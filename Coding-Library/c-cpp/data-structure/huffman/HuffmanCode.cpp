#include "./HuffmanCode.h"
#include "./Staler2019.h"
#include <algorithm>
#include <map>
#include <queue>
#include <string>
#include <utility>

using PIV = std::pair<int, std::vector<char>>;
using MCI = std::map<char, int>;
using PSC = std::pair<std::string, char>;

Huffman::Huffman(std::string str)
{
    encode(str);
}

void Huffman::encode(std::string str)
{
    // count char
    MCI charCounter;
    for (char &c : str) // O(nlog(n))
        charCounter[c]++;

    // from charCounter to initialize the tree
    // (total_index, char_in_str)
    std::priority_queue<PIV, std::vector<PIV>, std::greater<PIV>> tree;
    for (MCI::const_iterator it = charCounter.begin(); it != charCounter.end(); it++) {
        this->encodeArray[it->first] = "";
        tree.push(std::make_pair(it->second, std::vector<char>({it->first})));
    }

    // tree construction
    while (tree.size() > 1) {
        PIV p1 = tree.top();
        tree.pop();
        PIV p2 = tree.top();
        tree.pop();

        if (p1.first > p2.first)
            std::swap(p1, p2);
        for (int i = 0; i < p1.second.size(); i++)
            this->encodeArray[p1.second[i]] = "0" + this->encodeArray[p1.second[i]];
        for (int i = 0; i < p2.second.size(); i++)
            this->encodeArray[p2.second[i]] = "1" + this->encodeArray[p2.second[i]];

        p1.first += p2.first;
        p1.second.insert(p1.second.end(), p2.second.begin(), p2.second.end());
        tree.push(p1);
    }

    // sort and save tree
    for (char &c : tree.top().second)
        this->decodeArray.push_back(std::make_pair(this->encodeArray[c], c));
    sort(this->decodeArray.begin(), this->decodeArray.end(), this->stringCompare);
}

void Huffman::print()
{
    for (PSC &psc : this->decodeArray)
        cout << psc.second << ":" << psc.first << endl;
}

std::string Huffman::decode(std::string str)
{
    // TODO:UNDONE, maybe to modify decodeArray's type is needed
}

bool Huffman::stringCompare(PSC p1, PSC p2)
{
    return StalerPaul::stringCompare(p1.first, p2.first);
}