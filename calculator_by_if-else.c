#include <stdio.h>

int main()
{
    char operator;
    int n1, n2, result;

    printf("Enter an operator: ");
    scanf("%c", &operator);

    if (operator== '+' || operator== '-' || operator== '*' || operator== '/')
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &n1, &n2);

        if (operator== '+')
        {
            result = n1 + n2;
        }
        else if (operator== '-')
        {
            result = n1 - n2;
        }
        else if (operator== '*')
        {
            result = n1 * n2;
        }
        else if (operator== '/')
        {
            if (n2 != 0)
            {
                result = n1 / n2;
                printf("Result: %d", result);
            }
            else
            {
                printf("Sorry! you entered zero. Please enter non-zero digit.");
            }
            return 0;
        }

        printf("Result: %d", result);
    }
    else
    {
        printf("You entered a wrong operator.");
    }

    return 0;
}
