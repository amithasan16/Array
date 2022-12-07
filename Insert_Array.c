#include<stdio.h>
int main()
{
    int arr[100],position,i,n,value;
    printf("Enter an number of elements in array:\n"); //How many element from user
    scanf("%d",&n);
    printf("Enter %d elemets\n",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the locaton where you wish to insert an element:\n");
    scanf("%d",&position);
    printf("Enter the value of Insert:\n");
    scanf("%d",&value);


    for(i=n;i>=position-1;i--)
        arr[i+1]=arr[i];
    arr[position-1]=value;
    printf("Final Array:\n");
     for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}