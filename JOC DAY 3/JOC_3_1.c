// C program to display each digit of a given number and reverse it
#include <stdio.h>
int main()
{
    int num,mod,i,count=0,rev=0;
    printf("Enter the number: \n");
    scanf("%d",&num);
    printf("The digits in %d are: \n",num);
    while(num>0){
        mod=num%10;
        printf("%d,",mod);
        num=num/10;
        count++;
        rev=rev*10+mod;
    }
    printf("\nThe number of digits are %d and the reversed number is %d",count,rev);
    return 0;
}

