#include<stdio.h>
#include<stdlib.h>

void math_table(int num){
    for (int i = 1; i <= 10; i++) {
        printf("%d x %02d = %03d\n", num, i, num * i);
    }
}
