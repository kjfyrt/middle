#include <iostream>
#include "middle.h"
using namespace std;
int itc_mirror_count(long long number){
    int c = 0;
    for (int i = 1; i <= number; i++){
        if (itc_mirror_num(i) == 1){
            c++;
        }
    }
    return c;

}
