#include <iostream>
#include "middle.h"
using namespace std;
int itc_len_num(long long number){
    int b = 0;
    while(number > 0){
        b++;
        number = number / 10;
    }
    return b;

}