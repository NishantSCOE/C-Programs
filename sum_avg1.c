#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter a number for summation(Enter 0 to stop): ");
    do
    {
        scanf("%d", &num);
        sum += num;
    } while (num != 0);
    printf("Sum: %d", sum);
    

    return 0;
}