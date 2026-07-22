#include<stdio.h>

int main()
{
    int t;
    int n;

    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%d", &n);
        if(n % 2 == 0)
        {
            printf("%d\n", (n / 2));
        }
        else
        {
            printf("%d\n", ((n + 1)/2));
        }
        t = t - 1;
    }
    return 0;
}