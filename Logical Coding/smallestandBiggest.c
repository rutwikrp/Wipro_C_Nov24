#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    double arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%lf", &arr[i]);

    double min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Smallest element: %.2lf\n", min);
    printf("Biggest element: %.2lf\n", max);

    return 0;
}
