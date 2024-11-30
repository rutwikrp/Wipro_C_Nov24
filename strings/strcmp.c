#include <stdio.h>

int stricmp(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        char c1 = (*str1 >= 'A' && *str1 <= 'Z') ? *str1 + 32 : *str1; // Convert to lowercase
        char c2 = (*str2 >= 'A' && *str2 <= 'Z') ? *str2 + 32 : *str2; // Convert to lowercase
        if (c1 != c2) {
            return c1 - c2;
        }
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

int main() {
    char str1[] = "Hello";
    char str2[] = "hello";
    printf("stricmp result: %d\n", stricmp(str1, str2));
    return 0;
}
