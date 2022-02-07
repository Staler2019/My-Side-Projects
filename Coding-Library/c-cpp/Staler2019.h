#ifndef _STALER2019_H_
#define _STALER2019_H_

#include <string>
#include <vector>

/*-------------------------------------------------------------
Author:             Staler2019
Created Date:       2021/06/05
Last modified Date: 2021/06/05
Description:        Jia-Jyun, Yang's namespace
--------------------------------------------------------------*/
namespace StalerPaul {
/*-------------------------------------------------------------
Author:         Staler2019
Created date:   2021/06/05
Description:    Compare by 1.length 2.ASCII and return str1<str2 in default
--------------------------------------------------------------*/
bool stringCompare(std::string, std::string);

/*-------------------------------------------------------------
Author:         Staler2019
Created date:   2021/06/05
Description:    sort and return a number swaps
Reference:      http://alrightchiu.github.io/SecondRound/comparison-sort-insertion-sortcha-ru-pai-xu-fa.html
--------------------------------------------------------------*/
unsigned long long insertionSort(std::vector<long long> &);
/*-------------------------------------------------------------
Author:         Staler2019
Created date:   2021/06/09
Description:    change a string integer to long long int
Warning:        "-9,223,372,036,854,775,808" can't be present
--------------------------------------------------------------*/
long long str2int(std::string);
}; // namespace StalerPaul

#endif // !_STALER2019_H_