//C program to find the day of highest pay
#include <stdio.h>

int main()
{
    int i,j,n,m,mr_int[6]={560,660,590,760,480,960};
    float mr_float[6]={97.50,66.0,79.25,76.55,98.45,96.40};
    for(i=1;i<6;i++){
        if(mr_int[0]<mr_int[i]){
            mr_int[0]=mr_int[i];
            j=i;
        }
    }
    printf("Party for Mr.Int is on Day %d",j+1);
    for(n=1;n<6;n++){
        if(mr_float[0]<mr_float[n]){
            mr_float[0]=mr_float[n];
            m=n;
        }
    }
    printf("\nParty for Mr.Float is on Day %d",m+1);
    return 0;
}



