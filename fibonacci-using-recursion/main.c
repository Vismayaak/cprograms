#include <stdio.h>

int fibonacci(int f0,int f1,int lim)
{ 
    int fn;
    if(lim>0){
        fn=f0+f1;
        f0=f1;
        f1=fn;
        printf("%d ",fn);
        return fibonacci(f0,f1,lim-1);
    }
}
int main()
{
    int lim,f0=0,f1=1;
    printf("Enter a number: ");
    scanf("%d",&lim);
    printf("%d ",f0);
    printf("%d ",f1);
    fibonacci(f0,f1,lim-2);
    
    return 0;
}
