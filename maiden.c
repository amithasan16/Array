#include <stdio.h>
int main()
{
    int t, i,j, sum = 0;

    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        sum = 0;
        for (j = 0; j < 6; j++)
        {
            int score;
            scanf("%d", &score);
            sum = sum + score;
        }

        if (sum == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}