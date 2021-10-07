//C program to find largest of 2 numbers
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the values of a and b: ");
    scanf("%d%d",&a,&b);
    printf("The largest of %d and %d is %d",a,b,(a>b)?a:b);
    
}


