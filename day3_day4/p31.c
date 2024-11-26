#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[])
{
    int input_number = atoi(args[1]);
    printf("User given number is %d \n", input_number);
    int remainder_digit = 0,sum=0;
    while (input_number != 0)
    {
        remainder_digit = input_number % 10;
        if (remainder_digit %2 != 0)
            sum += remainder_digit;
        input_number = input_number / 10;
    }
    printf("sum of odd digits: %d", sum);
}