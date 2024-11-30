#include <stdio.h>

char *strtok(char *str, const char *delim) {
    static char *nextToken = NULL;

    if (str != NULL) {
        nextToken = str;
    }
    if (nextToken == NULL) {
        return NULL;
    }

    char *token = nextToken;

    // Find the first delimiter
    while (*nextToken) {
        for (const char *d = delim; *d; d++) {
            if (*nextToken == *d) {
                *nextToken = '\0'; // Terminate the token
                nextToken++;
                return token;
            }
        }
        nextToken++;
    }

    // If we reached here, there are no more delimiters
    nextToken = NULL;
    return (*token) ? token : NULL;
}

int main() {
    char str[] = "Hello,World!This,is,a,test.";
    const char *delim = ",!";

    char *token = strtok(str, delim);
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delim);
    }

    return 0;
}
