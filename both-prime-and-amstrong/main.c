#include<stdio.h>
#include<math.h>
void Amstrong(int);
void Prime(int);
int main()
{
    int n,count=0,num;
    printf("Enter a number: ");
    scanf("%d",&n);
    Prime(n);
    Amstrong(n);
return 0;
}
void Amstrong(int n)
{
    int num1,num,rem,sum=0,count=0;
    num=n;
    num1=n;
    
    while(num1!=0){
    count++;
    num1=num1/10;
    }
    while(num!=0){
        rem=num%10;
        sum=sum+pow(rem,count);
        num=num/10;
    }
    if(n==sum){
        printf("%d is an amstrong number\n",n);
    }
    else{
        printf("%d is not an amstrong number\n",n);
    }
}
void Prime(int n)
{
    int val=0,i;
    if(n==0||n==1)
    {
    printf("%d is not a prime number",n);
    }
    else{
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                printf("%d is not a prime number\n",n);
                val=1;
                break;
            }
        }
        if(val==0)
        {
        printf("%d is a prime number\n",n);
    }
}
    
}