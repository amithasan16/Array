#include<stdio.h>
#include<math.h>
int main()
{
    int i,sum=0,s=0,n,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+pow(i,2);
        }
        else
        {
            s=s+pow(i,2);
        }
    }
    c=s-sum;
    printf("%d\n",c);
}