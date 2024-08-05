#include <stdio.h>

int main()
{
    int i;
   int array1[10]={0,1,2,3,4,5,6,7,8,9};
   int array2[10]={10,9,8,7,6,5,4,3,2,1};
   int SumArray[10];
   
        for(i=0;i<10;i++)
        {
            SumArray[i]=array1[i]+array2[i];
        }
    printf("Resultant array is: \n");
        for(i=0;i<10;i++)
        {
            printf("%d ",SumArray[i]);
        }
   

    return 0;
}