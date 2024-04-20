#include <stdio.h>
int main()
{
    // learn it perfectly making triangle by numbers here we have to use nested for loop
    int i, j, n, k;
    printf("Enter number of rows");
    scanf("%d", &n);

    for(i=0;i<=n;++i)
    {   
        for(k=n;k<i;k--)
        {
            printf("%d",k);
        }
        for(j=0;j<=i;j++)
        {
            printf("%d",j);
        }
        
        printf("\n");
    }
    return 0;
}