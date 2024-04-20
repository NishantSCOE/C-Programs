// write a program that taks two integer from user and detemines whether the first
// number is divisible by the second number.
#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter two intergers : ");
    scanf("%d %d",&n1, &n2);

    if(n2 != 0)
    {
        if(n1 % n2 == 0)
        {
            printf("%d is divisible by %d", n1, n2);
        }
        else
        {
            printf("%d is not divisible by %d", n1, n2);
        }
    }
    else
    {
        printf("You entered zero. Please enter non-zero divisor.");
    }

    return 0;
}
