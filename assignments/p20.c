#include <stdio.h>

int main() {
    char raining, sunny, cloudy;

    
    printf("Is it raining? (Enter 'r' for raining, 'n' for not raining): ");
    scanf(" %c", &raining);
    printf("Is it sunny? (Enter 's' for sunny, 'n' for not sunny): ");
    scanf(" %c", &sunny);
    printf("Is it cloudy? (Enter 'c' for cloudy, 'n' for not cloudy): ");
    scanf(" %c", &cloudy);

    
    if (sunny == 's' && raining == 'n' && cloudy == 'n') {
        printf("You can go out. It is only sunny.\n");
    } else if (sunny == 's' && raining == 'r') {
        printf("You can go out. It is sunny and raining.\n");
    } else {
        printf("You cannot go out.\n");
    }

    return 0;
}
