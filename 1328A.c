#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b;
    int t;
    
    scanf("%d", &t);
    while(t != 0)
    {
        scanf("%d %d", &a, &b);
        if ((a % b) > 0)
        {
            printf("%d\n", b - (a % b));
        }
        else
        {
            printf("%d\n", 0);
        }
        t = t - 1;
    }
    return 0;
}