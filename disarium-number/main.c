#include <stdio.h>
#include<math.h>
int(int a)
{
    if(a>0)
    return(pow(a%10,3)+disarium(a/10));
}
int main()
{
   int a;
   printf("Enter a number:");
   scanf("%d",&a);
   if(disarium(a)==a){
    printf("It is a disarium number");    
   }
   else{
      printf("it is not an disarium number"); 
   }
    return 0;
}