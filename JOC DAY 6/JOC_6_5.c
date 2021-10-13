//C program to check whether a word is palindrome without using built in functions
#include <stdio.h>

int main()
{
    int i=0,l=0;
    char str[20],copy[20];
    printf("Enter the word: ");
    gets(str);
    while(str[i]!='\0'){
        l++;
        i++;
    }
    printf("Length of the string:%d\n",l);
    for(i=0;i<l;i++)
        copy[l-i-1]=str[i];
    copy[i]='\0';
    printf("The reversed string: %s\n",copy);
    for(i=0;i<l;i++)
        if(copy[i]!=str[i])
        {
            printf("%s is not a palindrome",str);
            return 0;
        }
    printf("%s is a palindrome",str);
    return 0;
}

