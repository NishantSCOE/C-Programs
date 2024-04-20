#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    // int num = n%10;
    // printf("%d",num); 
    //n%10 is for to get the last digit of a given number.

    // int number = n/10;
    // printf("%d",number);

    // n/10 for reducing last digit of given number.

    int r = 0;
    while (n != 0)
    {
        r = r * 10;
        r = r + (n % 10);
        n = n / 10;
    }
    printf("The reverse number is %d", r);
    return 0;
}