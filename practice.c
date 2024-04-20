#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
     int reverse=0;
    while(n!=0)
    {   
        n = n/10;
        
    }
    printf("The reverse of %d ",n);
    return 0;
}