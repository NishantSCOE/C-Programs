#include <stdio.h>
int main()
{
    char operator;
    float n1, n2, result;
    printf("Enter a operator : ");
    scanf("%c", &operator);
    printf("Enter two numbers : ");
    scanf("%f %f", &n1, &n2);

    switch (operator)
    {
    case '+':
    {
        result = n1 + n2;
        break;
    }
    case '-':
    {
        result = n1 - n2;
        break;
    }
    case '*':
    {
        result = n1 * n2;
        break;
    }
    case '/':
    {
        if (n2 != 0)
        {
            result = n1 / n2;
            break;
        }
        else
        {
            printf("ERROR! You entered zero.\n");
            return 1;
        }
    }
    default:
    {
        printf("You entered wrong operator.");

        break;
    }
    }

    printf("Result : %.2f", result);
    return 0;
}