#include<stdio.h>

int main()
{
    int n,sum,rem;
    printf("Enter Number ");
    scanf("%d",&n);
    
    while(n>0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    printf("Sum of Digits: %d",sum);
}