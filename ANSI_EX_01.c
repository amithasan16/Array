#include<stdio.h>
int main()
{
    int i;
    float ara[10];

    for(i=0;i<10;i++)
    {
        scanf("%f",&ara[i]);
    }

    float sum=0.00;
    for(i=0;i<10;i++)
    sum=sum+ara[i]*ara[i];
    printf("\n");

    for(i=0;i<10;i++)
    {
        printf("ara[%2d]=%5.5f\n",i+1,ara[i]);
    }
    printf("\n%.2f",sum);
}
    