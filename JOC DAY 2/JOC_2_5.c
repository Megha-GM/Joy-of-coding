//C program to calculate the bill
#include <stdio.h>
int main()
{
   int books,amount,discount,ref;
   printf("Enter the number of books: ");
   scanf("%d",&books);
   if(books<10000){
       printf("No discount");
       amount=books*10;
   }else if(books>10000 && books<15000){
       printf("Hey you got 10 percent discount!");
       ref=books*10;
       amount=ref-(ref*0.1);
   }else
   {
       printf("Hey you got 20 percent discount!");
       ref=books*10;
       amount=ref-(ref*0.2);
   }
   printf("\nThe total cost is Rs %d",amount);
   return 0;
}

