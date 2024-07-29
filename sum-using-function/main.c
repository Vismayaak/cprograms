#include <stdio.h>
int sum(int num){
    if(num==1){
        return 1;
    }else{
        return num+sum(num-1);
    }
}
int main()
{
    int num,result;
    printf("Enter the number:");
    scanf("%d",&num);
    result=sum(num);
printf("sum of natural numbers from 1 to %d:%d",num,result);
    return 0;
}