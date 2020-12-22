/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y,z;
    printf("Enter numbers a,b and c: ");
    scanf("%d\n%d\n%d",&x,&y,&z);
    
    if(x>y)
    {
    if(x>z)
    printf("X is the largest among %d\t%d\t%d",x,y,z);
    }
    else
    {
    if(y>z)
    {
      printf("Y Is the largest Number among%d\t%d\t%d",x,y,z);
    }
    else
    {
        printf("Z is the largest Number among %d\t%d\t%d",x,y,z);
    }
    }
    
}