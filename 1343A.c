#include<stdio.h>

int main()
{
    int t;
    long n;
    long powerOfTwo;
    long sumValue;
    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%ld", &n);
        powerOfTwo = 2;
        sumValue = 3;
        while(n % sumValue != 0)
        {
            powerOfTwo = powerOfTwo * 2;
            sumValue = sumValue + powerOfTwo;
        }
        printf("%ld\n", n / sumValue);
        t = t - 1;
    }
    return 0;
}