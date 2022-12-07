#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    float root = sqrt(n);
    root = ceil(root);
    if (n/root == root)
    {
        printf("YSE\n");
    }
    else
    {
        printf("NO\n");
    }
}