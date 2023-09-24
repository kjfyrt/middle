#include <iostream>
#include "middle.h"
using namespace std;
bool itc_mirror_num(long long number){
    int b = 0, num = number;
    while (number > 0){
        b = b*10 + number%10;
        number = number / 10;
    }
    if (b == num){
        return true;
    }
    return false;
}
