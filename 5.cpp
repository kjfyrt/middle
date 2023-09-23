#include <iostream>
#include "middle.h"
using namespace std;
int itc_max_num(long long number){
    int b = 0, max = 0;
    while(number > 0){
        b = number%10;
        if (b > max){
            max = b;
        }
        number = number / 10;
    }
    return max;

}
