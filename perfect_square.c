#include <stdio.h>
#include <math.h>
int main()
{
    int i, t, j;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int count = 0;
        int n;
        scanf("%d", &n);
        int arr[n];
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        for (int k = 0; k < n; k++)
        {
            int root = (int)sqrt(arr[k]);
            int mul = root*root;
            if (mul == arr[k])
            {
                count++;
            }
        }
        if (count != 0)
            printf("%d\n", count);
        else
            printf("%d\n", -1);
    }
}