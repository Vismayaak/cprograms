#include <stdio.h>
int main()
{
   int i,j;
    int a[10]={2,1,3,5,7,8,8,2,9,3};
    for(i=0;i<10;i++)
        {
            for(j=i+1;j<10;j++)
            {
                if (a[i]==a[j])
                {
                    printf("%d",a[i]);
                }
            }
        }
    return 0;
}
