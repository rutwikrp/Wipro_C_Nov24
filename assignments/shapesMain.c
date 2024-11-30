#include"squareShape.c"
#include"rightangle.c"
#include<stdio.h>
#include<stdlib.h>

int main(int argCount, char *args[]){
    int row=atoi(args[1]);

    rightAngle(row);
}