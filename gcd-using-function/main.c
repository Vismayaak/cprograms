#include <stdio.h>
int gcd(int a,int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    printf("Enter the  first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
   
    printf("gcd of%d and %d is%d\n",a,b,gcd(a,b));
    return 0;
}