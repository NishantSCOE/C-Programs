#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number to know odd or even");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }

    return 0;
}

