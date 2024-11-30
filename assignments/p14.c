#include <stdio.h>
#include <math.h>


int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sqrtValue = (int)sqrt(num);
    if (sqrtValue * sqrtValue == num) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}