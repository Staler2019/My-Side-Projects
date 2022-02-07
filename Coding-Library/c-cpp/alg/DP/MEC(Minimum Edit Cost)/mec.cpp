#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;

/**
 * @brief count the minimum edit cost from string a change to string b
 *
 * @param a string to be b
 * @param b target string
 * @param cost1 delete a char
 * @param cost2 insert a char
 * @param cost3 modify a char
 * @return int
 */
int mec(string &a, string &b, int cost1, int cost2, int cost3)
{
    vector<vector<pair<int, string>>> matp;
    //TODO: first
}

int main()
{
    string a, b;
    a = "nvadwfejer";
    b = "ewdaqew2nqjkfvn";
    cout << "Minimun Edit Cost:" << mec(a, b, 3, 4, 5);
}