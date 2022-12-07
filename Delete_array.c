#include<stdio.h>
int main()
{
    int arr[100],position,i,n;
    printf("Enter number of elements in array:\n");
    scanf("%d",&n);
    printf("Enter %d elements in array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the location where you wish to delete elementary:\n");
    scanf("%d",&position);
    if(position>=n+1)
    {
        printf("Deletion not possible\n");

    }
    else 
    {
        for(i=position-1;i<n-1;i++)
        arr[i]=arr[i+1];
       printf("Final Array:\n");
       for(i=0;i<n-1;i++)
       {
        printf("%d ",arr[i]);
       }
    }

}