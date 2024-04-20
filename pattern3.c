#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        int a = 1;
        for (int j = 1; j <= n; j++)
        char ch = (char)(a+64);
        {
            printf("%c ", ch);
        }
        printf("\n");
    return 0;
}