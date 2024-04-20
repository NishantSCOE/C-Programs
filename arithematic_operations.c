#include <stdio.h>
int main()
{
    double a, b, c, d, e, f;
    printf("Enter any two integers : ");
    scanf("%lf %lf", &a, &b);

    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    printf("The addition of %.2lf and %.2lf is %.2lf\n", a, b, c);
    printf("The substraction of %.2lf and %.2lf is %.2lf\n", a, b, d);
    printf("The multiplication of %.2lf and %.2lf is %.2lf\n", a, b, e);
    printf("The dividation of %.2lf and %.2lf is %.2lf\n", a, b, f);

    return 0;
}