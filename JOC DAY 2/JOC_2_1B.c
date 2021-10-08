//C program to check eligibility to vote using ternary operator
#include <stdio.h>

int main()
{
    int age,a;
    printf("Enter your age: ");
    scanf("%d",&age);
    a=(age>18)?printf("You are eligible to vote"):printf("You are not eligible to vote");
    return 0;
}

