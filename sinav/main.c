#include <stdio.h>

int main() {
    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double sum = 1.0;
    double term = 1.0;

    for (int i = 1; i < n; i++) {
        term *= x / i;
        sum += term;
    }

    printf("Sum of the series for x = %.2lf and %d terms is: %.6lf\n", x, n, sum);

    return 0;
}















