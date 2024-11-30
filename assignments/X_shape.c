#include <stdio.h>
#include<stdlib.h>
int main(int argCount, char *args[]) {
    int n=atoi(args[1]);
    
    if (n < 1) {
        printf("Size must be a positive integer.\n");
        return 1;
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
            if (j == i || j == n - i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); 
    }

    return 0;
}
