#include <stdio.h>
#include <stdlib.h>

double factorial_iter(double n) {
    double result = 1;
    for (double i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

double factorial_rec(double n)
{
    if (n <= 1) return(1);
    else return (n * factorial_rec(n - 1));
}
int main()
{
    double n = 20;
    double result_iter = factorial_iter(n);
    double result_rec = factorial_rec(n);
    printf("%f\n", result_iter);
    printf("%f", result_rec);
    return 0;
}