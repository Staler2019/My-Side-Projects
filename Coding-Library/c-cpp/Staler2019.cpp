#include "./Staler2019.h"

#include <algorithm>
#include <string>
#include <vector>

/*-------------------------------------------------------------
Author:         Staler2019
Created date:   2021/06/05
Description:    Compare by 1.length 2.ASCII and return str1<str2 in default
--------------------------------------------------------------*/
bool StalerPaul::stringCompare(std::string str1, std::string str2)
{
    if (str1.length() < str2.length())
        return true;
    else
        return (str1.compare(str2.first) < 0);
}

/*-------------------------------------------------------------
Author:         Staler2019
Created date:   2021/06/05
Description:    sort and return a number swaps
Reference:      http://alrightchiu.github.io/SecondRound/comparison-sort-insertion-sortcha-ru-pai-xu-fa.html
--------------------------------------------------------------*/
unsigned long long StalerPaul::insertionSort(std::vector<long long> &num)
{
    unsigned long long count = 0;
    std::size_t sorted = 0, next = 1;
    for (; next < num.size(); next++, sorted++) {
        std::size_t pending = sorted;
        for (; pending >= 0; pending--)
            if (num[pending] <= num[next])
                break;
        for (std::size_t i = next; i > pending + 1; i--) {
            swap(num[i], num[i - 1]);
            count++;
        }
    }
    return count;
}

/*-------------------------------------------------------------
Author:         Staler2019
Created date:   2021/06/09
Description:    change a string integer to long long int
Warning:        "-9,223,372,036,854,775,808" can't be present
--------------------------------------------------------------*/
long long StalerPaul::str2int(std::string &str)
{
    int ans = 0;
    bool sign = false;
    if (str[0] == '-')
        sign = true;

    for (size_t i = sign; i < str.length(); i++) {
        ans *= 10;
        ans += str[i];
    }
    if (sign)
        ans = -1;

    return ans;
}