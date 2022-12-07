#include<stdio.h>
int main()
{
int n=100,i,q;
int arr[n];
int t,v;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
scanf("%d",&q);
for(t=0,v=0;t<q,v<q;t++,v++)
{
    scanf("%d %d",&arr[t],&arr[v]);
    arr[t]=arr[i]+arr[v];
    printf("%d ",arr[t]);
}

}
