//C program to find largest of 3 numbers
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values of a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("The largest of %d , %d and %d is %d",a,b,c,(a>b && a>c)?a:((b>c)?b:c));
}



