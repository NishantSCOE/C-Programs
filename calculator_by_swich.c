#include <stdio.h>
int main()
{//program for calculator using switch statement
    char operator;
    double a, b, result;
    printf("Enter the operator('+','-','*','/') : ");
    scanf("%c",&operator);
    printf("Enter two numbers : ");
    scanf("%lf %lf", &a, &b);

    switch (operator)
    {
    case '+':
    {
        result = a + b;
    }
    case '-':
    {
        result = a - b;
        break;
    }
    case '*':
    {
        result = a * b;
        break;
    }
    case '/':
    {//
        if (b != 0)
        {
            result = a / b;
            break;
        }
        else
        {
            printf("ERROR :you enterded zero");
            return 1;
        }
    }
    default:
    {
        printf("You entered a wrong operator");
        return 1;
    }
    }
     printf("Result : %.2lf", result);
    return 0;
}



