#include<stdio.h>

int main()
{
    int t;
    int h, m;
    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%d %d", &h, &m);
        printf("%d\n", (23 - h)*60 + (60 - m));
        t = t - 1;
    }
    return 0;
}