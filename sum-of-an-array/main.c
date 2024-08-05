#include<stdio.h>
int main()
{
    int i,sum;
    int a[5]={10,6,5,2,8};
    
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
        sum=sum+a[i];
    }
    printf("the sum of five numbers is %d",sum);
    return 0;
}