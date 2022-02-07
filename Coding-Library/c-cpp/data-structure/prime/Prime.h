#ifndef _PRIME_H_
#define _PRIME_H_

#include <vector>

/*-------------------------------------------------------------
// TODO: WRONG createTable()
Author:             Staler2019
Created Date:       2021/06/05
Last modified Date: 2021/06/05
Description:        Give a number to creat a prime vector and you can check if prime from 1 to the number
--------------------------------------------------------------*/
class Prime {
    std::vector<unsigned long long> _prime; // vector of primes

    void createTable(unsigned long long);

  public:
    bool checkPrime(unsigned long long); // check if prime

    Prime(unsigned long long); // create prime table
};

#endif // !_PRIME_H_