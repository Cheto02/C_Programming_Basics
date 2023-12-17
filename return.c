#include <stdio.h>

//return returns a value back to calling function
double square(double x)
{
    double result = x * x;

    return result;//alt return x*x
}

int main()
{
    double x = square(3.14);
    printf("%.4lf", x);// formart specifier for a double is lf

    return 0;
}