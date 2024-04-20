#include <stdio.h>
int main()
{
    // int n;

    // printf("Enter number of rows : ");
    // scanf("%d", &n);
    char ch;
    for (int i = 97; i <= 122; i++)
    // for (int i = 65; i <= 90; i++)
    {
        printf("%d -> ", i);
        char ch = (char)i;
        printf("%c\n", ch);
    }
    return 0;
}