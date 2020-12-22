/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y,time;
    printf("Enter The Time in 24 Hours Format: \n Format Should Be Like This->Hour:Minute");
    scanf("\n %d %d",&x,&y);
    
    if(x<=12&&y<60)
    printf("Time is %d:%d A.M ",x,y);
    else if(x>12&&x<24&&y<60);
    time=x-12;
    printf("Time is %d:%d P.M ",time,y);
    
    printf("\nHave A nice Day !! \n");
    printf("═══════════════════░▒░══════════════════");

    return 0;
}
