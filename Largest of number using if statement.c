/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter Two Numbers:");
    scanf("%d %d",&x,&y);
    
    if(x>y)
    {
        printf("X is larger than y");
    
    }
    if(x<y)
    {
        printf("Y is the larger than x");
    }
    else if(x==y)
    printf("Both X And Y are Equal");
    return 0;
}
