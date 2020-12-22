#include<stdio.h>

int main()
{
    int a,b,i;
    printf("Enter Two Numbers  A And B ");
    scanf("%d %d",&a,&b);
    
    for(i=a>b?a:b;i<=a*b;i=i+(a>b?a:b))
    if(i%a==0&&i%b==0)
    break;
    printf("\n Lcm is %d",i);
    return 0;
    
}