#include<stdio.h>
int main()
{//write a program to know ASCII value of any character
    char ch;
    printf("Enter any character to know ASCII value");
    scanf("%c",&ch);

    printf("ASCII value of %c is %d",ch,ch);
    
    return 0;
}/*In C programming, ASCII (American Standard Code for Information
 Interchange) values represent characters using integers. 
 Each character is assigned a unique numerical code. 
 For example, the ASCII value for the letter 'A' is 65.*/