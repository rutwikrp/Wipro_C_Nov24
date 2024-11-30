#include <stdio.h>

int main() {
    float num = 2.2f;        // Declare a float variable
    float *p = NULL;         // Declare a pointer to float and initialize to NULL
    float **pp = NULL;       // Declare a double pointer and initialize to NULL

    p = &num;                // Point p to the address of num
    pp = &p;                 // Point pp to the address of p

    // Print the address of p
    printf("Address of p (using pp): %p\n", (void *)pp);
    printf("Address of p (directly): %p\n", (void *)&p);
    printf("Value at pp (address stored in p): %p\n", (void *)*pp);
    printf("Value at *pp (value of num): %.2f\n", **pp);

    return 0;
}
