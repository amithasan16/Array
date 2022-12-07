#include<stdio.h>
int main()
{
  int t,n,i,max,j,k;
  int arr[100];
  scanf("%d",&t);
  
  for(i=0;i<t;i++)
  {
    scanf("%d",&n);
     
    for(int j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
   max=arr[0];
   for(k=1;k<n;k++)
   {
    if(arr[k]>max)
    {
        max=arr[k];
    
      }
   }
    printf("%d\n",max);
    }
   }