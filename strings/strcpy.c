#include <stdio.h>

void strncpy(char *dest, const char *src, int n) {
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) { // Pad with null characters if src is shorter than n
        dest[i] = '\0';
    }
}

int main() {
    char src[] = "Hello, World!";
    char dest[20];
    strncpy(dest, src, 5);
    dest[5] = '\0'; // Null-terminate the string
    printf("strncpy result: %s\n", dest);
    return 0;
}
