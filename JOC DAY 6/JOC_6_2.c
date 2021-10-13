//C program of string manipulation functions
#include <stdio.h>
#include<string.h>
int main()
{
    char college[30]="RNS institute of technology";
    char add[15]=" , Bangalore";
    int c;
    c=strlen(college);
    printf("Length of the string is %d",c);
    strcat(college,add);
    printf("\nNew string after concatenation: %s",college);
    printf("\nUpper case string:%s",strupr(college));
    return 0;
}

