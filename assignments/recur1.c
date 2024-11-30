#include <stdio.h>
#include<stdlib.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    }
    return n * factorial(n - 1); 
}

int main(int argCount, char *args[]) {
    
    int num=atoi(args[1]);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    int result = factorial(num);

    printf("Factorial of %d is %d\n", num, result);

    return 0;
}
