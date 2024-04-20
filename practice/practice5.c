#include<stdio.h>
int main()
{
    int count,n1,n2,GCD,LCM;

    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    for(count=1;count<=n1 && count<=n2;count++)
    {
        if(count%n1==0 && count%n2==0)
        {
            GCD=count;
        }
    }
    printf("The GCD is %d\n",GCD);

    LCM = (n1*n2)/GCD;
    printf("THe LCM is %d",LCM);

    return 0;
}