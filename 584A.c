#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int t;
    int i;

    scanf("%d %d", &n, &t);

    int *number = (int *)malloc(n * sizeof(int));

    if(t == 10)
    {
        if(n == 1)
        {
            printf("%d", -1);
            exit(0);
        }
        else
        {
            number[0] = 1;
            i = 1;
            while(i < n)
            {
                number[i] = 0;
                i = i + 1;
            }
        }
    }
    else
    {
        i = 0;
        while(i < n)
        {
            number[i] = t;
            i = i + 1;
        }
    }
    i = 0;
    while(i < n)
    {
        printf("%d", number[i]);
        i = i + 1;
    }
    free(number);
    return 0;
}