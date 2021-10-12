//C program to add an element between two elements in a group
#include <stdio.h>

int main()
{
    int loc,i,n,val,a[30];
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The original array is:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nEnter the value to be added:\n");
    scanf("%d",&val);
    printf("Enter the location where you want to add it:\n");
    scanf("%d",&loc);
    for(i=n-1;i>=loc-1;i--)
        a[i+1]=a[i];
    a[loc-1]=val;
    printf("The array after insertion of %d is:\n",val);
    for(i=0;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}

