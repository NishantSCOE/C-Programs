#include <stdio.h>
void main()
{
    int mob1[10], mob2[10],ABCID[15];
    char name1[20];
    const int pin1 = 1914, pin2 = 2003;
    int pin11, pin22;

    printf("Enter your name: \n");
    scanf("%s", name1);

    if (name1 == 'nishant' || name1 == 'NISHANT' || name1 == 'Nishant')
    {
        printf("Enter your security pin: \n");
        scanf("%d", &pin11);

        if (pin1 == pin11)
        {
            printf("Enter your mobile number: \n");
            scanf("%s", mob1);

            if (mob1 == 8421455145)
            {
                printf("Your mobile number is correct and updated.\n");
                printf("Your ABC Id is %s", ABCID);
            }
            else
            {
                printf("Sorry! Its not your mobile number or\nYou entered wrong number.");
                return 1;
            }
        }
        else
        {
            printf("You entered wrong pin.\n")
        }
    }
    else if (name1 == 'lalit' || name1 == 'LALIT' || name1 == 'Lalit')
    {
        printf("Enter your PIN: ");
        scanf("%s", pin22);

        if (pin2 == pin22)
        {
            printf("Enter your mobile number: ");
            scanf("%s", mob2);

            if (mob2 == 8600945205)
            {
                printf("Your mobile number is correct and updated.\n");
            }
        }
        else
        {
            printf("You entered wrong PIN.\n");
        }
    }
}