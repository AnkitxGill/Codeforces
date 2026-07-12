#include<stdio.h>

int main()
{
    int t;
    long long n;
    long long k;
    
    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%lld %lld", &n, &k);
        if(n % 2 == 0)
        {
            printf("yES\n");
        }
        else if(((n - k) % 2) == 0)
        {
            printf("yES\n");
        }
        else
        {
            printf("nO\n");
        }
        t = t - 1;
    }
    return 0;
}