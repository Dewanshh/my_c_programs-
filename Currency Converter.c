#include <stdio.h>

int main()
{
    int x;
    int dollar,rupee;
    int result_dollar,result_rup;
    printf("***********************Currency Converter*****************************\n");
    printf("*************************Dune Technologies**********************************\n");

   printf("Press 1 $ to ₹ ");
   printf("\nPress 2 ₹ to $\n");
   scanf("%d",&x);
   
   switch(x)
   {
       case 1:
       printf("\nEnter Amount in $: ");
       scanf("%d",&dollar);
       printf("Enter For Conversion:\n");
       result_rup=dollar*75.9;
       printf("₹ %d /-",result_rup);
       break;
       
       case 2:
       printf("\nEnter Amount in ₹: ");
       scanf("%d",&rupee);
       printf("Enter For Conversion:\n");
       result_dollar=rupee/75.9;
       printf("$ %d /-",result_dollar);
       break;
   }
   return 0;
       
   }
