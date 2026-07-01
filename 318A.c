#include<stdio.h>
#include<conio.h>

int main()
{
    long long n, k, center_position;
    scanf("%lld %lld", &n, &k);
    if(n%2 == 0)
    {
        center_position = n/2;
    }
    else
    {
        center_position = (n+1)/2;
    }
    if(k <= center_position)
    {
        printf("%lld",(2*k) - 1);
    }
    else
    {
        printf("%lld", 2*(k - center_position));
    }
    return 0;
}