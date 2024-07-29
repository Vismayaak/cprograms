#include <stdio.h>

int main()
{
    int num,count=1,sum=0;
    printf("enter any natural numbers:");
    scanf("%d" ,&num);
    printf("the sum of natural numbers from 1 to %d are:",num);
        while(count<=num)
        {
            sum=sum+count;
            printf("%d",count);
            count++;
        }
        if(count>num)
        {
        printf("=%d \n",sum);
        }
        else
        {
            printf("+");
        }
        
    return 0;
}
