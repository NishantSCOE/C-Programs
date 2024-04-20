#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the number to know which is bigger");
    scanf("%d %d",&n1,&n2);

    if(n1<n2)
    {
        printf("%d is a bigger than %d",n2,n1);
    }
    else{
        printf("%d is bigger than %d",n1,n2);
    }
    return 0;
}
//