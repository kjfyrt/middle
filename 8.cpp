#include <iostream>
#include "middle.h"
using namespace std;
int itc_null_count(long long number){
    int l = 0;
    if (number == 0){
        return 1;
    }
    while (number > 0){
        if (number%10 == 0){
            l++;
        }
        number = number / 10;
    }
    return l;
}
