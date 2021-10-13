//C program to print a string with space
#include <stdio.h>

int main()
{
    char sentence[30];
    printf("Enter a phrase:\n");
    gets(sentence);
    printf("The phrase is:\n");
    puts(sentence);
    return 0;
}

