#include<stdio.h>
int main()
{
    int i,n,temp,j;
    scanf("%d",&n);
    int arr[n];
    
    for(j=0;j<(n-1);j++)
 {
        for(i=0;i<(n-1);i++)
    {
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
        

        if(arr[i]>arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
 
    for(i=0;i<n;i++)
    {
        printf("\n%d ",arr[i]);
    }
 }
}