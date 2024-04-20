#include <stdio.h>
int main()
{//program to detemine which type of triangle it is by giving side input
    int a, b, c;
    printf("Enter three sides of a triangle : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("The triangle is equilateral");
    }
    else if (a == b || b == c || c == a)
    {
        printf("The triangle is isosceles");
    }
    else
    {
        printf("the triangle is scelene");
    }
    return 0;
}

