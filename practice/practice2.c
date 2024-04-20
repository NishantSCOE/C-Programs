#include<stdio.h>
int main()
{
    float l, w, area;
    printf("Enter length and width of rectangle: ");
    scanf("%f %f",&l,&w);

    area = l*w;
    printf("Area of rectangle is: %f",area);
    return 0;
}