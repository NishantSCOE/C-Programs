#include <stdio.h>
//program to withdraw money from ATM 
//ATM PIN is 2005
//Available amount is 20000
int main()
{
    int pin = 2005, pin1, amount = 20000, amount1;

    printf("Enter your pin : ");
    scanf("%d", &pin1);
    if (pin == pin1)
    {
        printf("Enter amount you want to withdraw : ");
        scanf("%d", &amount1);
        if (amount1 <= amount)
        {
            amount = amount - amount1;
            printf("You have succesfully withdraw %d.\nAmount left : %d",amount1, amount);
        }
        else
        {
            printf("You do not have sufficient amount.");
        }
    }
    else
    {
        printf("You entered wrong PIN.Please enter valid PIN.");
    }
    return 0;
}
