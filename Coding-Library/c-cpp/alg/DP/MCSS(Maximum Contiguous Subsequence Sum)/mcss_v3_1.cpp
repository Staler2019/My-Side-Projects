/**
 * @file mcss_v3_N.cpp
 * @author Staler2019 (github.com/Staler2019)
 * @brief MCSS algorithm
 * @version 1
 * @date 2021-05-12
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <iostream>
#include <vector>
using namespace std;

int mcss(vector<int> s) // 可空子序列和(和最小為0)
{
    int m, ans;
    ans = m = 0; // 邊界條件(初始為0)

    for (int i = 0; i < s.size(); i++)
    {
        m = max(m + s[i], s[i]); // 遞迴關係
        ans = max(ans, m);
    }

    return ans;
}

int main()
{
    vector<int> arr = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -55, -100, -200};
    cout << "MCSS is " << mcss(arr) << endl;
    return 0;
}