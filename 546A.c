#include<stdio.h>

int main()
{
    int w;
    int k;
    int n;

    scanf("%d", &k);
    scanf("%d", &n);
    scanf("%d", &w);

    int totalCost = (w * (w + 1) * k) / 2;
    
    if(totalCost > n)
    {
        printf("%d", totalCost - n);
    }
    else
    {
        printf("%d", 0);
    }
    return 0;
}