#include <stdio.h>
int main()
//cascaded if_else statements
//use when we have multiple conditions conditions
{
    int n;
    printf("enter your number");
    scanf("%d", &n);
//write code to know given number is positive,negative or zero
    if (n > 0)
        printf("the number is positive");
    else if (n < 0)
    {
        printf("the number is negative");
    }
    else
    {
        printf("the number is zero");
    }
    return 0;
}
/*cascaded if else statements
//syntax of cascaded if else statement
    
    if(condition1)
    {
        (code to be executed);
    }
    else if(condition2)
    {
        (code to be executed);
    }
    else (when above conditions are not satisfied)
    (code to be executed);
*/