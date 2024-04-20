#include<stdio.h>
int main()
{
    int a=3;
    float b=3.45;
    char c='@';
    double d=2.345;

    printf("The size of %d is %lu\n",a,sizeof(a));
    printf("The size of %f is %lu\n",b,sizeof(b));
     printf("The size of %c is %lu\n",c,sizeof(c));
     printf("The size of %lf is %lu",d,sizeof(d)); 
     return 0;
}