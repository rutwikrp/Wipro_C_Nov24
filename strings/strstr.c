#include <stdio.h>

char *strstr(const char *haystack, const char *needle) {
    if (*needle == '\0') return (char *)haystack; // Empty needle case

    while (*haystack) {
        const char *h = haystack;
        const char *n = needle;

        // Compare strings
        while (*h && *n && *h == *n) {
            h++;
            n++;
        }

        if (*n == '\0') return (char *)haystack; // Found match
        haystack++;
    }
    return NULL; // No match
}

int main() {
    char str[] = "Hello, World!";
    char sub[] = "World";
    char *result = strstr(str, sub);
    if (result) {
        printf("Substring found: %s\n", result);
    } else {
        printf("Substring not found\n");
    }
    return 0;
}
