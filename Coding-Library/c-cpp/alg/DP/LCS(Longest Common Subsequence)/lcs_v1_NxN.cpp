/**
 * @file lcs_v1_NxN.cpp
 * @author Staler2019 (github.com/Staler2019)
 * @brief LCS algorithm
 * @version 1
 * @date 2021-05-12
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string lcs(string &a, string &b)
{
    string ans;
    vector<vector<string>> matp(a.length() + 1, vector<string>(b.length() + 1, ""));

    for (int i = 0; i < a.length(); i++)
    {
        for (int j = 0; j < b.length(); j++)
        {
            if (b[j] == a[i])
            {
                if (matp[i + 1][j].length() >= matp[i][j].length() + 1)
                    matp[i + 1][j + 1] = matp[i + 1][j];
                else
                    matp[i + 1][j + 1] = matp[i][j] + a[i];
            }
            else
            {
                if (matp[i + 1][j].length() >= matp[i][j + 1].length())
                    matp[i + 1][j + 1] = matp[i + 1][j];
                else
                    matp[i + 1][j + 1] = matp[i][j + 1];
            }
        }
    }

    return matp[a.length()][b.length()];
}

int main()
{
    string a, b, ans;
    a = "abcdefghi";
    b = "abcddfghi";
    ans = lcs(a, b);
    cout << ans << " size:" << ans.length() << endl;
}