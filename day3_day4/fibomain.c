#include "fibo.c"
#include<stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[]){
    int t1 = 1,t2 = 2;
    int numberOfTerms=atoi(args[1]);

    if (checkInput(numberOfTerms))
    {
        puts("Invalid Input");
        exit(0);
    }
   
    printf("Fibonacci Series: %d, %d", t1, t2);
    fiboSeries(t1,t2,numberOfTerms);
}