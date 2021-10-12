//C program to find weekly and average salary
#include <stdio.h>

int main()
{
    int sum1=0,mr_int[6]={560,660,590,760,480,960};
    float sum2=0,av1,av2,mr_float[6]={97.50,66.0,79.25,76.55,98.45,96.40};
    for(int i=0;i<6;i++)
        sum1=sum1+mr_int[i];
    av1=(float)sum1/6;
    printf("The weekly salary of Mr.Int is %d and and average salary is %.3f",sum1,av1);
    for(int i=0;i<6;i++)
        sum2=sum2+mr_float[i];
    av2=sum2/6;
    printf("\nThe weekly salary of Mr.Float is %.3f and and average salary is %.4f",sum2,av2);
    return 0;
}


