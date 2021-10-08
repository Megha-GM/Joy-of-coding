//C program to find branch available
#include <stdio.h>
int main()
{
    int rank;
    printf("Enter your rank: ");
    scanf("%d",&rank);
    if(rank<=3250)
        printf("You will get a seat in all branches");
    else if(rank>3250 && rank<=6505)
        printf("You will get a seat in ISE,ECE and MEC branches");
    else if(rank>6505 && rank<=12012)
        printf("You will get a seat in ECE and MEC branches");
    else if(rank>12012 && rank<=22340)
        printf("You will get a seat in MEC branch");  
    else
        printf("Admission is not possible at RNSIT");
    return 0;
    
}

