//C program to delete an element from an array
#include <stdio.h>

int main()
{
    int j,i,n,del,a[30];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The original array is:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nEnter the value to be deleted:");
    scanf("%d",&del);
    printf("The array after deletion of %d is:",del);
    for(i=0;i<n;i++){
        if(a[i]==del){
            j=i;
            break;
        }
        printf("%d ",a[i]);
    }
    while(j<n-1)
    {
        printf("%d ",a[i+1]);
        i++;
        j++;
    }
    return 0;
}

