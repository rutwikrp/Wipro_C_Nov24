#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Process each digit of the number
    while (num != 0) {
        digit = num % 10; // Extract the last digit
        if (digit % 2 == 0) { // Check if the digit is even
            sum += digit; // Add to the sum if even
        }
        num = num / 10; // Remove the last digit
    }

    // Output the result
    printf("Sum of even digits: %d\n", sum);

    return 0;
}
