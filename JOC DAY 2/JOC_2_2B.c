//C program to find the largest of 3 numbers using conditional statement
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the values of a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<0 || b<0 || c<0){
        printf("Invalid number as input");
        return 0;
    }
    if(a>b && a>c)
        printf("The largest is %d",a);
    else
    {
        if(b>a && b>c)
            printf("The largest is %d",b);
        else
            printf("The largest is %d",c);
    }
    return 0;
}
