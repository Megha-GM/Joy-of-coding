//C program to check the number of guesses
#include <stdio.h>
int main()
{
    int i,n,a[20],find,loc,dup,attempt;
    printf("Enter the number of chits present:\n");
    scanf("%d",&n);
    printf("Enter the chit list in order when picked up:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number to be found:\n");
    scanf("%d",&find);
    for(i=0;i<n;i++){
        if(a[i]==find){
            loc=i+1;
            printf("%d was found in %d position\n",find,loc);
        }
        attempt=loc;
    }
    printf("\n%d was found after %d attempts",find,attempt);
    return 0;
}

