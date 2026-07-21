#include<stdio.h>

int main()
{
    int t;
    int k;
    int x;

    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%d", &k);
        scanf("%d", &x);
        while(k > 0)
        {
            x = 2 * x;
            k = k - 1;
        }
        printf("%d\n", x);
        t = t - 1;
    }
    return 0;
}