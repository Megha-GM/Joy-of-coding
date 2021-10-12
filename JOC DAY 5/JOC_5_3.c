//C program to find if twins are present in an array
#include <stdio.h>

int main()
{
    int j,i,a[30],n,flag=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                flag=1;
            }
        }
    if(flag==1)
        printf("The group is not unique");
    if(flag==0)
        printf("The group is distinct");
    return 0;
}


