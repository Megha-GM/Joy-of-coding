//C program to count the number of words in a string
#include <stdio.h>
#include<string.h>
int main()
{
    int c=0,l,i;
    char str[50];
    char* p;
    p=str;
    printf("Enter a string: ");
    gets(str);
    l=strlen(str);
    printf("\nThe number of words in '%s' is: ",str);
    for(int i=1;i<l;i++){
        if(*(p+i)==' ')
            c++;
        continue;
    }
    printf("%d",c+1);
    return 0;
}


