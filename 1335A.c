#include<stdio.h>
#include<conio.h>

int main()
{
    int t;
    long long n;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d", &n);
        if(n > 2)
        {
            if(n % 2 == 0)
            {
                printf("%d\n", n - (n / 2) - 1);
            }
            else
            {
                printf("%d\n", n - ((n + 1)/2));
            }
        }
        else
        {
            printf("%d\n", 0);
        }
        t = t - 1;
    }
    return 0;
}