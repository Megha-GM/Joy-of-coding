//C program to find the largest of 2 numbers using conditional statement
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the values of a and b: ");
    scanf("%d%d",&a,&b);
    if(a<0 || b<0)
        printf("Invalid number as input");
    else if(a==b)
        printf("The numbers are equal");
    else if(a>b)
        printf("The largest is %d",a);
    else
         printf("The largest is %d",b);
    return 0; 
}

