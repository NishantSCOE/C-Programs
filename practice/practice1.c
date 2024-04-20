#include<stdio.h>
int main()
{
    float d, r, area, pi = 3.1415;
    printf("Enter the diameter of a circle: ");
    scanf("%f",&d);

    r = d/2;
    area = pi*(r*r);

    printf("Area of circle is %.2f",area);
    return 0;
}