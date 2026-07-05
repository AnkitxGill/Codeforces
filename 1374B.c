#include<stdio.h>
#include<conio.h>

int main()
{
    int t;
    int count = 0;
    long n;
    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%d", &n);
        while (n != 1)
        {
            if (n % 6 == 0)
            {
                n = n / 6;
                count = count + 1;
            }
            else if(n % 6 == 3)
            {
                n = n * 2;
                count = count + 1;
            }
            else
            {
                break;
            }
        }
        if(n == 1)
        {
            printf("%d\n", count);
        }
        else
        {
            printf("%d\n", -1);
        }
        count = 0;
        t = t - 1;
    }
    return 0;
}