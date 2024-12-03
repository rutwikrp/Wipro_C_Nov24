#include<stdio.h>

void freqOfElement(int element, int arr[],int size){
    int count=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            count++;
        }            
    }

    if (count==0)
    {
        printf("The element %d does not exist",element );
    }
    else
    {
        printf("The count of element: %d in the array arr is %d",element,count);
    }  

}

int main(){
    int arr[6]={10,30,40,50,50,60};
    int element,size=6;
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter element to count frequency: ");
    scanf("%d",&element);

    freqOfElement(element,arr,size);

}