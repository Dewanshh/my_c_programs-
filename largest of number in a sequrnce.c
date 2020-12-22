/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int x,y,z,i,l=0;
   printf("Enter Numbers N ");
   scanf("%d",&x);
   for(i=1;i<=x;i++)
   {
       printf("%d ",i);
       z=l<x?l:x;
       l=x;
   }
   printf("\nLargest Number is %d",l);
   

    return 0;
}
