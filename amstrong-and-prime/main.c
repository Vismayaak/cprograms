#include<stdio.h>
#include<math.h>

void Armstrong(int);
void prime(int);
int main()
{
	int n,count=0,num;
	printf("Enter a number: ");
	scanf("%d",&n);
	

	Armstrong(n);
	prime(n);
	return 0;

}
void Armstrong(int n)
{
	int num,num1,rem,count=0,sum=0;
	num=n;
	num1=n;

	while(num1!=0)
	{
		count++;
		num1=num1/10;
	}

	while(num!=0)
	{
		rem=num%10;
		sum=sum+pow(rem,count);
		num=num/10;
	}
	if(n==sum)
	{
		printf("%d is an armstrong number\n",n);
	}
	else{
		printf("%d is not an armstrong number\n",n);
	}
}

void prime(int n)
{
	int val=0,i;

	if(n==0||n==1)
	{
		printf("%d is not a prime number\n",n);
	}
	else
	{
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