// #include <stdio.h>
// int main()
//  {
//      int i=0;
//      while (i<= 10)
//      {
//          printf("%d ",i);
//           i++;
//      }
//      return 0;
//  }

// #include <stdio.h>
// int main()
// {
//     int i = 5;
//     while (i >= 1)
//     {
//         printf("%d ", i);
//         i--;
//     }
//     return 0;
// }

// bitwie operator

//<< bitwise left shift multiplying the number by 2
//>> bitwise right shift dividing number b 2

// ex.5 write c program to calculate factorial of given number
#include <stdio.h>
int main()
{
    int i, num, factorial = 1;
    printf("Enter a number you want factorial: ");
    scanf("%d", &num);
//for finding factorial using while loop e.g : 4!=4*3*2*1
    while(i>=1)
    {
        factorial = factorial * i;
    }
    printf("Factorial: %d", factorial);
    return 0;
}