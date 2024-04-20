#include <stdio.h>

int main()
{
    int year;
    //divisible by year%4==0 && codition for not a leap year year%100!=0
    //or or 
    //it also year%400==0

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
