#include <stdio.h>
#include <math.h>

int main() {
    int n, m;
    double sum = 0.0, term;
    int power = 1, denominator = 1;

    printf("Enter the value of n (1 <= n <= 3): ");
    scanf("%d", &n);
    if (n < 1 || n > 3) {
        printf("Invalid input for n. It should be between 1 and 3.\n");
        return 1;
    }

    printf("Enter the number of terms (1 <= m <= 10): ");
    scanf("%d", &m);
    if (m < 1 || m > 10) {
        printf("Invalid input for m. It should be between 1 and 10.\n");
        return 1;
    }

    
    for (int i = 1; i <= m; i++) {
        term = pow(n, power) / (double)denominator; 
        if (i % 2 == 0) {
            sum -= term; 
        } else {
            sum += term; 
        }

        
        power *= 2;          
        denominator += 2;    
    }

    printf("The sum of the series is: %.6f\n", sum);

    return 0;
}
