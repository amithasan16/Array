#include<stdio.h>
int main()
{
   int i,j;
   int arr[100];
   for(i=0;i<5;i++)
   {
      scanf("%d",&arr[i]);
   }
   arr[j-1]=arr[i];
   for(j=0;j<5;j++)
   {
      printf("%d ",arr[j]);
   }
}