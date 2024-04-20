#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number to know factorial : ");
    scanf("%d", &n);

    int factorial = 1;
    while (n > 0)
    {
        factorial *= n;
        n--;
    }
    printf("The factorial is %d", factorial);
    return 0;
}