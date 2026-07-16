#include<stdio.h>

int main()
{
    int i;
    int t;
    int n;
    int num;
    int oddCount = 0;
    int evenCount = 0;

    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d", &n);
        i = 2 * n;
        while (i > 0)
        {
            scanf("%d", &num);
            if(num % 2 == 0)
            {
                evenCount = evenCount + 1;
            }
            else
            {
                oddCount = oddCount + 1;
            }
            i = i - 1;
        }
        if(evenCount == oddCount)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        evenCount = 0;
        oddCount = 0;
        t = t - 1;
    }
    return 0;
}