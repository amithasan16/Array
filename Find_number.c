#include<stdio.h>
int main()
{
    int arr[10],i,rem;
    for(i=0;i<10;i++)
{
    scanf("%d",arr[i]);
}
while(arr[i]>0)
{
    rem=arr[i]%10;
    if(arr[rem]==1)
    break;
    arr[rem]=1;
    arr[i]=arr[i]/10;
}
if(arr[i]>0)
{
    printf("Yes\n");
}
else
printf("No");
}