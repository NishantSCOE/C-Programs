#include <stdio.h>
int main()
{
    // precedence of operator
    // write a c program to evaluate expression a + b * (c - d) / e
    double a, b, c, d, e;
    printf("Enter values for (a,b,c,d,e) : ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d, &e);

    double result = a + b * (c - d) / e;

    printf("result : %.2lf\n", result);
    return 0;
}