#include <stdio.h>
#include <stdlib.h>

int descendingOrder(int n) {
    char digits[5];
    sprintf(digits, "%04d", n);
    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 4; j++)
            if (digits[i] < digits[j]) {
                char temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
    return atoi(digits);
}

int ascendingOrder(int n) {
    char digits[5];
    sprintf(digits, "%04d", n);
    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 4; j++)
            if (digits[i] > digits[j]) {
                char temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
    return atoi(digits);
}

int main() {
    int num = 3524, count = 0;
    while (num != 6174) {
        int asc = ascendingOrder(num);
        int desc = descendingOrder(num);
        num = desc - asc;
        count++;
    }
    printf("Kaprekar's constant reached in %d iterations\n", count);
    return 0;
}
