#include<stdio.h>
#include<stdlib.h>

int main(int args, char *argv[]){

    int table_of=atoi(argv[1]);
    printf("Multiplication table for %d:\n", table_of);
    for (int i = 1; i <= 30; i++) {
        printf("%d x %02d = %03d\n", table_of, i, table_of * i);
    }

}