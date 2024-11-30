#include <stdio.h>
#include<stdlib.h>

void hollow(int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' for the boundary
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("* ");
            } else {
                printf("  "); // Print space for hollow part
            }
        }
        printf("\n");
    }
}

int main(int argCount, char *args[]) {

    int n=atoi(args[1]);
    hollow(n);

    return 0;
}
