/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y,sum1,sum2;
    printf("Enter Any  Number");
    scanf("%d",&x);
    
    if(x>0)
    {
        printf("\nThe Sum with number greater than the previous is ");
        y=x+1;
        sum1=x+y;
        printf("\nAdding the numbers we get: %d ",sum1);
    }
    if(x<0)
    {
        printf("\nThe Sum with number greater than the previous is ");
        y=x+1;
        sum2=x+y;
        printf("\nAdding the numbers we get: %d ",sum2);
    }
    return 0;
}
