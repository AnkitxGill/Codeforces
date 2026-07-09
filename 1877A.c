#include<stdio.h>

int main()
{
    int t;
    int n;
    int individualEfficiency;
    int totalEfficiency = 0;

    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%d", &n);
        while(n - 1 > 0)
        {
            scanf("%d", &individualEfficiency);
            totalEfficiency = totalEfficiency + individualEfficiency;
            n = n - 1;
        }
        printf("%d\n", totalEfficiency * -1);
        totalEfficiency = 0;
        t = t - 1;
    }
    return 0;
}