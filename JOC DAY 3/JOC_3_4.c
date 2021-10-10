//C program to print digits of a number without zero
#include <stdio.h>
int main()
{
   int num,mod;
   printf("Enter a number: ");
   scanf("%d",&num);
   printf("Output: \n");
   while(num){
        mod=num%10;
        if(mod==0){
          num=num/10;
          continue;
        }
        printf("%d ", mod);  
        num=num/10;
   }
   return 0;
}
  


