#include<stdio.h>
void name(){
    for(int i=1;i<=100;i++)
    if(i%4==0){
        printf("%d ",i);
    }
}
int main()
{
    void name();
}