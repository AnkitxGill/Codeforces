#include<stdio.h>

int main()
{
    int t;// test cases
    int n;// petya's apartment number
    int x;// no of apartments on each floor except first floor
    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%d %d", &n, &x);
        if(n - 2 > 0)
        {
            if((n - 2) % x == 0)
            {
                printf("%d\n", ((n - 2)/x) + 1);
            }
            else
            {
                printf("%d\n", ((n - 2)/x) + 2);
            }
        }
        else
        {
            printf("%d\n", 1);
        }
        t = t - 1;
    }
    return 0;
}