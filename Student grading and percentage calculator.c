#include<stdio.h>

int main()
{
    int s1,s2,s3,s4,s5,total;
    char  grade;
    float per;
    printf("Enter Marks Below");
    scanf("%d",&s1);
    scanf("%d",&s2);
    scanf("%d",&s3);
    scanf("%d",&s4);
    scanf("%d",&s5);
    
    total=s1+s2+s3+s4+s5;
    per= (float)total/500*100;
    if(per>95)
        grade='A+';
    else if(per>85)
        grade='A';
    else if(per>75)
        grade='B';
    else if(per>65)
        grade='C';
    else
    grade='D';
        
    printf("Your Percentage is %f and Grade Is %c",per,grade);    
        
            return 0;

    
}
