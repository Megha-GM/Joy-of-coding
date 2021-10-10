//C program to find the sum of the digits
#include <stdio.h>
int main()
{
   int num,sum=0,mod,modsum,sum2=0;
   printf("Enter a number: ");
   scanf("%d",&num);
   printf("The sum of the digits in %d is ",num);
   while(num>0){
       mod=num%10;
       sum=sum+mod;
       num=num/10;
   }
   printf("%d",sum);
   while(sum>0){
       modsum=sum%10;
       sum2=sum2+modsum;
       sum=sum/10;
   }
   printf("\n(Single digit sum is %d)",sum2);
   return 0;
}

