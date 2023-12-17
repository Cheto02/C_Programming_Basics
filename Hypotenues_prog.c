#include <stdio.h>
#include <math.h>

// a program t calculate the hypotenues angles

int main()
{
    double A;
    double B;
    double C;

    printf("\nEnter the value of A");
    scanf("%lf",&A);

    printf("\nEnter the value of B");
    scanf("%lf",&B);

    C = sqrt(A*A + B*B);
    printf("Side C is: %lf", C);
    
    return 0;
}