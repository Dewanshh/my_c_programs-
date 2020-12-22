#include<stdio.h>

int main()
{
    int values[5],i=0;
    for(i=0;i<5;++i)
    {
        printf("Enter Integers:");
        scanf("%d",&values[i]);
    }
    for(i=0;i<5;++i)
    {
        printf("%d\n",values[i]);
    }
}