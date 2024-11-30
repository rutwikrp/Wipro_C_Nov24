#include <stdio.h>

void strip(char str[]) {
    int start = 0, end = 0, i = 0;

    // Find the first non-space/tab character (leading spaces)
    while (str[start] == ' ' || str[start] == '\t') {
        start++;
    }

    // Find the last non-space/tab character (trailing spaces)
    for (end = start; str[end] != '\0'; end++);
    end--;
    while (end > start && (str[end] == ' ' || str[end] == '\t')) {
        end--;
    }

    // Shift the stripped part to the beginning of the array
    for (i = 0; start <= end; i++, start++) {
        str[i] = str[start];
    }
    str[i] = '\0'; // Add null terminator
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Strip leading and trailing spaces and tabs
    strip(str);

    // Output the stripped string
    printf("Stripped string: '%s'\n", str);

    return 0;
}
