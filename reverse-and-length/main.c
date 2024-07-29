#include<stdio.h>
int main()
{
    int a,b,c,num,sum,length;
    printf("Enter a number:");
    scanf("%d",&num);
    a=num;
    while(a!=0){
        b=a%10;
        sum=sum*10+b;
        a=a/10;
        length++;
    
    }
    printf("%d \n",sum);
    printf("length of the number is :%d",length);
    return 0;
}