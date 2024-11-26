#include<stdio.h>

int main(){
    float fArray[5]={2.2f,3.5f,6.5f,5.5f,8.5f};
    

    printf("*fArray: %f\n", *fArray);
    printf("*fArray+1: %f\n", *fArray+1);
    printf("*fArray + *fArray: %f\n", *fArray + *fArray);

    printf("&fArray: %p\n", &fArray);
    printf("&fArray+1: %p\n", &fArray+1);
    printf("&fArray-1: %p\n", &fArray-1);
    printf("&fArray+2: %p\n", &fArray+2);
}