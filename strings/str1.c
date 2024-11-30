#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char state[6][20];
    char capital[6][20];
    int numberOfStates=(argc - 1) / 2;

    for (int i = 0; i < numberOfStates; i++) {
        strcpy(state[i], argv[1 + i * 2]);   
        strcpy(capital[i], argv[2 + i * 2]); 
    }

    printf("\n%-20s %-20s\n", "States", "Capital");
    printf("%-20s %-20s\n", "-----------", "-----------");

    for (int i = 0; i < numberOfStates; i++) {
        printf("%-20s %-20s\n",state[i], capital[i]);
    }

    return 0;
}
