#include<stdio.h>
#include<conio.h>

int max(int, int);
int main()
{
    int a, b, c, d;
    int maximum;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    maximum = max(max(a,b), max(c,d));
    if(maximum - a > 0)
    {
        printf("%d ", maximum - a);
    }
    if(maximum - b > 0)
    {
        printf("%d ", maximum - b);
    }
    if(maximum - c > 0)
    {
        printf("%d ", maximum - c);
    }
    if(maximum - d > 0)
    {
        printf("%d ", maximum - d);
    }
    return 0;
}
int max(int a, int b)
{
    return (a > b)? a : b;
}