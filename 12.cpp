#include <iostream>
#include "middle.h"
using namespace std;
int itc_second_simple_max_num(long long number){
    int max = 0; int max2 = 0;
    if (number / 10 == 0){
        return -1;
    }
    while (number > 0){
        if (number%10 >= max){
            max2 = max;
            max = number % 10;
        }
        if (number%10 > max2 and number%10 < max){
            max2 = number % 10;
        }
        number = number / 10;
    }
    if (max == max2) {
        return -1;
    }
    return max2;
}
