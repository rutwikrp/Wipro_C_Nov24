#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[])
{
    int input_number = atoi(args[1]);
    int given_number=atoi(args[1]);
    printf("User given number is %d \n", input_number);
    int remainder_digit = 0,count=0;
    while (input_number != 0)
    {
        remainder_digit = input_number % 10;
        if (remainder_digit %2 == 0)
            count ++;
        input_number = input_number / 10;
    }
    printf("number of even digits in %d is: %d",given_number, count);
}