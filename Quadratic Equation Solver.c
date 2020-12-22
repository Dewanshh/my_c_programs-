#include<stdio.h>

int main()
{
    int a,b,c;
    float alpha,beta;
    printf("Enter values of a, b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    
    printf("\nThe quadratic equation will be %dx^2+%dx+%d",a,b,c);
    alpha=(-b+(b*b-4*a*c)^1/2)/2*a;
    beta=(-b-(b*b-4*a*c)^1/2)/2*a;
    printf("\nThe roots of the equation are:\nAlpha=%f \nBeta=%f",alpha,beta);
    return 0;
}