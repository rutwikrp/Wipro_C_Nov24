#include<stdio.h>
#include<stdlib.h>
#include"shapes.h"

void square(int row){


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf(" * ");
        }
        printf("\n");
        
    }
    

}