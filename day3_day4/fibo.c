#include "fibo.h"
#include<stdio.h>
#include<math.h>

int checkInput(int size)
{
    if (size < 2)
        return 1;
    return 0;
}

void fiboSeries(int t1, int t2, int nthNum){
    int nextTerm=t1+t2, i;

    if (nthNum == 2)
        return;
    for (i = 3; i <= nthNum; ++i) {
    printf(", %d", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  
}