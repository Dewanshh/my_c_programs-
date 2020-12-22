#include<stdio.h>
int main()
{
    int c;
    float f;

    printf("Enter Temperature In Celsius: \n");
    scanf("%d",&c);
    f=(float)c*9/5+32;
    printf("Temperature In Farheneit: %f",f);
    return 0;
}