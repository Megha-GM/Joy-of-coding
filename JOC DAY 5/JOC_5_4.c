//C program to find frequency of occurance of an element in an array
#include <stdio.h>
int main()
{
    
    int i,j,arr[30],count=0,num,size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    printf("Enter the elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Frequency of each element:\n");
    for(i=0;i<size;i++)
    {
        num=arr[i];
        if(num==0)
            continue;
        for(j=i;j<size;j++)
        {
            if(num==arr[j])
            {
                count++;
                arr[j]=0;
            }
        }
        printf("%d - %d\n",num,count);
        count=0;
    }
}



