#include <iostream>
#include "middle.h"
using namespace std;
int itc_rev_num(long long number){
    int sum = 0;
    while (number > 0) {
        if (number % 10 > 0) {
            sum++;
        }
        number = number / 10;
    }
    return sum;
}
