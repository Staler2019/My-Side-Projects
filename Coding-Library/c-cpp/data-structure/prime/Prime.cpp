#include "./Prime.h"

#include <algorithm>
#include <vector>
using ULL = unsigned long long;

Prime::Prime(ULL n)
{
    createTable(n);
}

void Prime::createTable(ULL n)
{
    bool table[n + 1]{};
    table[0] = table[1] = true;
    for (ULL i = 2; i * i < n + 1; i++) {
        if (table[i] == false)
            for (ULL j = i * i; j < n + 1; j += i)
                table[j] = true;
    }
    for (ULL i = 2; i < n + 1; i++)
        if (!table[i])
            _prime.push_back(i);
}

bool Prime::checkPrime(ULL n)
{
    return std::find(_prime.begin(), _prime.end(), n) != _prime.end();
}
