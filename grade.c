// 2. Develop a C program that employs a nested 'if' statement to
// categorize a student's grade based on the input percentage.
// Consider different grade ranges (A, B, C, etc.) and print the corresponding grade.
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    if (marks <= 100)
    {
        if (marks >= 90)
        {
            printf("Grade 'A'");
        }
        else if (marks >= 75)
        {
            printf("Grade 'B'");
        }
        else if (marks >= 55)
        {
            printf("Grade 'C'");
        }
        else
        {
            printf("You are failed");
        }
    }
    else
    {
        printf("You entered wrong marks");
    }
    return 0;
}