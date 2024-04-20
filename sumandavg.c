#include<stdio.h>
int main()
{
    int n,i,sum = 0;
    printf("Enter a number to know average: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum +=i;
    }
    printf("Sum : %d\n",sum);
    double avg = sum/n;
    printf("Average : %.2lf",avg);
    return 0;
}