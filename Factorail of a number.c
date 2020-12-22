#include <stdio.h>
int main()
{
    int n,i,x,rem,fact,t,sum;
    
    printf("To find all strong numbers between 1 to N\n");
    printf("Enter value of N\n");
    scanf("%d",&n);
    
    printf("List of strong numbers between 1 to %d\n",n);
    for(i=1;i<=n;i++)
    {
        x=i;
        sum=0;
        while(x)
        {
           rem=x%10;   
           for(t=1,fact=1;t<=rem;t++){
            fact=fact*t;
           }
           sum+=fact;
           x=x/10;
        }
        
        if(sum==i)
           printf("%d\t\n",i);
    }
    return 0;
}