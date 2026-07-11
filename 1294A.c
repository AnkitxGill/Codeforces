#include<stdio.h>

int main()
{
    int t;
    long a, b, c;
    long n;
    long max;

    long maxnumber(long, long, long);
    
    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%ld %ld %ld %ld", &a, &b, &c, &n);
        max = maxnumber(a, b, c);
        n = n - (max - a);
        n = n - (max - b);
        n = n - (max - c);

        if(n >= 0 && n % 3 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        t = t - 1;
    }
    return 0;
}
long maxnumber(long x, long y, long z)
{
    if(x > y)
    {
        if(x > z)
        {
            return x;
        }
        return z;
    }
    else
    {
        if(y > z)
        {
            return y;
        }
        return z;
    }
}