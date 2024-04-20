// LOOPS:
// loops are  used for repeatative execution of a block of code.
// 1]FOR LOOP
// 2]WHILE LOOP
// 3]DO-WHILE LOOP
/*
    syntax 1)for loop

    for(initialization; condition; update)
    {
        //code to be executed
    }
*/
// multiplication table

// user freindly program for multiplication of desired number
// #include <stdio.h>
// int main()
// {
//     int number, multiplication = 1;
//     printf("Enter a number: ");
//     scanf("%d",&number);
//     for (int i = 1; i <= number; i++)
//     {
//         multiplication = multiplication * i;
//     }
//     printf("Multiplication: %d", multiplication);
//     return 0;
// }
// User friendly countdown you want using for loop
// #include <stdio.h>
// int main()
// {
//     int n1, n2;
//     printf("Enter from where to where you want countdown: ");
//     scanf("%d %d", &n1, &n2);

//     for (int i = n1; i <= n2; i++)
//     {
//         printf("%d ", i);
//     }
//     return 0;
// }

// User friendly sum of numbers
#include <stdio.h>
int main()
{
    int n1, n2, sum = 0;
    printf("Enter the range you want summation(n1 to n2) : ");
    scanf("%d %d", &n1, &n2);

    for (int i = n1; i <= n2; i++)
    {
        sum = sum + i;
    }
    printf("Sum: %d", sum);
    return 0;
}
