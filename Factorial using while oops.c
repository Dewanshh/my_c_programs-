#include<stdio.h>

int main()
{
    int i,fact=1,n;
    printf("Enter Number to calculate factorial of that:");
    scanf("%d",&n);
    
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    printf("Factorial:%d",fact);
}