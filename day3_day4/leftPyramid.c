#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))
// void leftpyramid(int n){

//     for (int row = 0; row <= n; row++){
        
//         for (int s = 0; s <= n-row; s++)
//         {
//             printf(" ");
//         }
        
//         for (int col = 0; col <= row; col++)
//         {
//             printf("*");
//         }
//         printf("\n");
        
//     }

// }
void newSquare(int n){
    for (int row = 0; row <= 2*n; row++){
        for (int col = 0; col <= 2*n; col++)
        {
            int atEveryIndex=fmin(fmin(row,col),fmin(row,col));                              //MIN(MIN(row,col),MIN(row,col));
            printf("%d ",atEveryIndex);
        }
        printf("\n");
    }
}


int main(int argCount, char *args[]){

    int row=atoi(args[1]);
    newSquare(row);

}
// #include <stdio.h>

// int main() {
//     int rows;

//     // Input number of rows
//     printf("Enter the number of rows for the triangle: ");
//     scanf("%d", &rows);

//     // Print the triangle
//     for (int i = 1; i <= rows; i++) {
//         // Print spaces
//         for (int j = 1; j <= rows - i; j++) {
//             printf(" ");
//         }
//         // Print stars
//         for (int k = 1; k <= i; k++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }
