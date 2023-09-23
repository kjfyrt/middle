#include <iostream>
#include "middle.h"
using namespace std;
int itc_min_num(long long number){
    int b, min = 10;
    if (number == 0){
        return 0;
    }
    while(number > 0){
        b = number%10;
        if (b < min){
            min = b;
        }
        number = number / 10;
    }
    return min;

}
