#include <stdio.h>
int main()
{
    char operator;
    double n1, n2, result;

    printf("Enter a operator: ");
    scanf("%c", &operator);

    if (operator == '+' || operator == '-' || operator == '*' || operator == '/')
    {
        printf("Enter two number: ");
        scanf("%lf %lf", &n1, &n2);
        if (operator == '+')
        {
            result = n1 + n2;
        }
        else if (operator == '-')
        {
            result = n1 - n2;
        }
        else if (operator  == '*')
        {
            result = n1 * n2;
        }
        else
        {
            if (n2 != 0)
            {
                result = n1 / n2;
            }
            else
            {
                printf("ERROR! you entered zero.");
                return 1;
            }
        }
        printf("Result: %.3lf", result);
    }
    else
    {
        printf("You entered wrong operator.");
    }

    return 0;
}

