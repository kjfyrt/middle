#include <iostream>
#include "middle.h"
using namespace std;
int itc_rev_num(long long number){
    int sum = 0;
    if (number == 0){
        return 1;
    }
    if (number < 0){
        number = -number;
    }
    while (number%10 == 0){
        number = number/10;
    }
    while (number > 0){
        sum++;
        number = number/10;
    }
    return sum;
}
