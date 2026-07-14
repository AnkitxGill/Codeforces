#include<stdio.h>

int main()
{
    int t;
    int n;
    int a, b;
    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%d %d %d",&n, &a, &b);
        if(n % 2 == 0)
        {
            (((n / 2) * b) < n * a)? printf("%d\n", (n / 2) * b): printf("%d\n", n * a);
        }
        else
        {
            ((((n - 1) / 2) * b) + a < (n * a))?printf("%d\n", (((n - 1) / 2) * b) + a) : printf("%d\n", n * a);
        }
        t = t - 1;
    }
    return 0;
}