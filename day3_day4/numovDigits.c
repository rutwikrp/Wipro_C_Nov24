#include <stdio.h>
#include <stdlib.h>
// p29 Count the number of odd digits in a number

int countEvenDigits(int n)
{
    int countOfOddDigits = 0, remainderDigit = 0;
    while (n != 0)
    {
        remainderDigit = n % 10;
        n = n / 10;
        if (remainderDigit % 2 == 1)
            countOfOddDigits++;
    }
    return countOfOddDigits;
}

int main(int argCount, char *args[])
{
    int input_number = atoi(args[1]);
    printf("User given number is %d \n", input_number);
    int countOfOddDigits = countEvenDigits(input_number);
    printf("Count of odd Digits = %d", countOfOddDigits);
}