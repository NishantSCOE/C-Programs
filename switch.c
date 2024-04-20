#include <stdio.h>
int main()

{
    int ages;
    printf("Enter your ages");
    scanf("%d", &ages);

    switch (ages)
    {
    case 18:
        printf("your ages is 18");
        break;
    case 20:
        printf("your ages is 20");
    default:
        printf("your ages is not 18 or 20");
        break;
    }
    return 0;
}