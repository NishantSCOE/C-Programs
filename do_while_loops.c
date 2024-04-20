//do-while loops ensures that the code block is executed at least once
//do-while is useful when you want to ensure the the loop body
//execute at least once
//as the condition is checked after the loop execution.
 #include<stdio.h>
 int main()
 {
    int sum=0,num;
    do{
        printf("Enter a number(0 to stop):");
        scanf("%d",&num);
        sum += num;
    }while (num!=0);
       
     printf("sum of entered number: %d",sum);
    
    return 0;
    
 }