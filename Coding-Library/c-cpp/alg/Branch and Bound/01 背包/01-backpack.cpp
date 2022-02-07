/**
 * @file 01-backpack.cpp
 * @author Staler2019 (github.com/Staler2019)
 * @brief 01-backpack by branch and bound, best search algorithm
 * @version 1
 * @date 2021-05-19
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <bits/stdc++.h>
using namespace std;

/**
 * @brief find now node by best search algorithm
 *
 * @param p_w
 * @param index now level
 * @param ub
 * @param lb
 * @return pair<int, int>
 */
pair<int, int> bestSearch(vector<pair<int, int>> &p_w, int index, int now_ub, int now_lb)
{
    int ub = now_ub, lb = now_lb;

    // alg



    // ret
    if(ub <= lb) return make_pair(now_ub, now_lb);
    else return make_pair(ub, lb);
}

/**
 * @brief using branch & bound, best search algorithm
 *
 * @param p_w value & weight
 * @param m bag weight
 * @return int max_value in bag
 */
int branchAndBound(vector<pair<int, int>> &p_w, int m)
{
    int ub = 0, lb = 0;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> p_w;

    while (n--)
    {
        int first, second;
        cin >> first >> second;
        p_w.emplace_back(first, second);
    }

    int m;
    cin >> m;
    cout << "max value of the bag:" << branchAndBound(p_w, m) << endl;
}