#include <stdio.h>

int main() {
    int n;
    long long sum = 0, term = 1;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= 10; i++) {
        term *= n;   
        sum += term; 
    }

    
    printf("The sum of the series is: %lld\n", sum);

    return 0;
}
