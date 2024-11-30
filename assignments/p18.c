#include<stdio.h>
int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    
    if (ch >= 'a' && ch <= 'z') {
        printf("%c is small case alphabet.\n", ch);
    } else {
        printf("%c is not an small case alphabet.\n", ch);
    }

    return 0;
}