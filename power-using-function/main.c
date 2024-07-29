#include <stdio.h>
int power(int n1,int n2);
int main()
{
    int num,a,result;
    printf("Enter a number: ");
    scanf("%d",&num );
    printf("Enter power number: ");
    scanf("%d",&a);
    result=power(num,a);
    printf("%d^%d=%d",num,a,result);
    return 0;
}
int power(int num,int a){
    if(a!=0)
    return (num*power(num,a-1));
    else
    return 1;
}
