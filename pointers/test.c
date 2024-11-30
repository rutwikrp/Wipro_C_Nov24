#include<stdio.h>
#include<string.h>
void large(int *n, int *b){
    for (int i = *n; i <= *b; i++)
    {
        printf("%c ",i);
    }
    
}
char *strev(char *my_str){
    int length;
    for (int i = 0,j=strlen(my_str)-1; i < j; i++,j--)
    {
        char temp=my_str[i];
        my_str[i]=my_str[j];
        my_str[j]=temp;
    }
    return my_str;
}

int main(){
    
    char string[]="Rutwik";

    printf("%s",strev(string));
    
    
}
