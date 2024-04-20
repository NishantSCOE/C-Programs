// 1. Write a C program that uses an 'if-else' statement to determine if a given
// number is even or odd. Display an appropriate message based on the result.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any integer to know odd or even : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }
    return 0;
}