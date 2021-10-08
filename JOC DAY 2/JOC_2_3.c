//C program to perform simple calculations
#include <stdio.h>
int main()
{
   char oper;
   int a,b,result;
   printf("Enter the operator: ");
   scanf("%c",&oper);
   printf("Enter the values of a and b: ");
   scanf("%d%d",&a,&b);
   switch(oper){
        case '+': result=a+b;
                  printf("The result is %d",result);
                  break;
        case '-': result=a-b;
                  printf("The result is %d",result);
                  break;
        case '*': result=a*b;
                  printf("The result is %d",result);
                  break;
        case '%': result=a%b;
                  printf("The result is %d",result);
                  break;
        case '/': if(b==0){
                    printf("Division by zero is not possible");
                    return 0;
                  }
                  else{
                      result=a/b;
                      printf("The result is %d",result);
                  }
        default: printf("Invalid operator");
   }
   return 0;
}

