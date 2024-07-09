/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int choice;
    float num1,num2,c;
    printf("1.Addition\n 2.Subtraction\n 3.Multiplication \n 4.Division\n");
    scanf("%d",&choice);
    printf("Enter the first number \n Enter the second number\n");
    scanf("%f%f" ,&num1,&num2);
    switch(choice){
        case 1:
      printf(" result : %f", c=num1+num2) ;
    break;
         case 2:
        printf("%f",c=num1-num2);
        break;
         case 3:
       printf( "%f",c=num1*num2);
       break;
        case 4:
         printf("%f",c=num1/num2);
         break;
    }

    return 0;
}
