#include <iostream>
#include "middle.h"
using namespace std;
int itc_sum_num(long long number){
    int b = 0;
    while(number > 0){
        b = b + number%10;
        number = number / 10;
    }
    return b;

}
