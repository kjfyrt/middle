#include <iostream>
#include "middle.h"
using namespace std;
long long itc_multi_num(long long number){
    int b = 1;
    if (number < 0){
        number = -number;
    }
    if (number == 0){
        return 0;
    }
    while(number > 0){
        b = b * (number%10);
        number = number / 10;
    }
    return b;

}
