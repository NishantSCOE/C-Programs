#include <stdio.h>
int main()
{
    int factorial=1, num;
    printf("Enter a number to find factorial : ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("There is no factorial of negative number.");
    }
    else
    {
        do
        {
            factorial = factorial*num;
            num--;
        } while (num > 0);

         printf("Factorial : %d", factorial);
    }
   
    return 0;
}