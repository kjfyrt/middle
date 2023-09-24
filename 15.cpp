#include <iostream>
#include "middle.h"
using namespace std;
int itc_rev_bin_num(long long number) {
    long long n = 0, m = 1;
    while (number > 0) {
        n = n + (number%10)*m;
        m = m*8;
        number = number / 10;
    }

    return n;
}
