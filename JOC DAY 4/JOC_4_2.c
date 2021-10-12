//C program to declare,read and print array
#include <stdio.h>

int main()
{
    char day[6]={'M','T','W','T','F','S'};
    int i,n,mr_int[6];
    float mr_float[6];
    printf("Enter Mr.Int's daily wages: \n");
    for(i=0;i<6;i++)
        scanf("%d",&mr_int[i]);
    for(i=0;i<6;i++)
        printf("%c- Rs.%d,",day[i],mr_int[i]);
    printf("\nThe wages in reverse order: \n");
    for(n=5;n>=0;n--)
        printf("%c- Rs.%d,",day[n],mr_int[n]);
    printf("\nEnter Mr.Float's daily wages: \n");
    for(i=0;i<6;i++)
        scanf("%f",&mr_float[i]);
    for(i=0;i<6;i++)
        printf("%c- Rs.%f,",day[i],mr_float[i]);
    printf("\nThe wages in reverse order: \n");
    for(n=5;n>=0;n--)
        printf("%c- Rs.%f,",day[n],mr_float[n]);
    return 0;
}






