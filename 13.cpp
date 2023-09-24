#include <iostream>
#include "middle.h"
using namespace std;
long long itc_bin_num(long long number) {
    long long n = 0, m = 1;
    while (number > 0) {
        n = n + (number%2)*m;
        m = m*10;
        number = number / 2;
    }

    return n;
}
