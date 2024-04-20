#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("Enter the number,floatting number,character and doublenum to know size: ");
    scanf("%d %f %c %lf",&a,&b,&c,&d);

    printf("the size of %d is %lu bytes\n",a,sizeof(a));
    printf("the size of %d is %lu bytes\n",b,sizeof(b));
    printf("the size of %d is %lu bytes\n",c,sizeof(c));
    printf("the size of %d is %lu bytes\n",d,sizeof(d));
    return 0;

}