#include <stdio.h>
int main()
{
   int i,j,temp,N=11;

   char ara[30]="abddccss";

   
 
   for(i=0;i<N;i++)
   {
       printf("%c",ara[i]);
   }
   printf("\n");
   for(j=0;j<N-2;j++)
   {
       for(i=0;i<(N-1);i++)
   {
       if(ara[i]< ara[i+1])
       {
           temp=ara[i];
           ara[i]=ara[i+1];
           ara[i+1]=temp;
       }
}
   for(i=0;i<N;i++)
   {
       printf("%c",ara[i]);
   }
   printf("\n");
   }
return 0;
}

