//C program to find sum of increased value of digits
#include <stdio.h>
int main()
{
    int num,mod,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num){
        mod=num%10;
        mod=mod+1;
        sum=sum+mod;
        num=num/10;
    }
    printf("%d",sum);
    return 0;
}



