#include<stdio.h>
int main()
{
    for(int i=2;i<=100;i++)
    {
        if(i%2!=0)
        {
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}