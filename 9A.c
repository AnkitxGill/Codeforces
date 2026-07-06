#include<stdio.h>
#include<conio.h>

int main()
{
    int Y; // Yakko's result of Dice roll
    int W; // Wakko's result of Dice roll
    int A; // Dot's possible outcomes
    int B = 6; // Total number of outcomes
    scanf("%d %d", &Y, &W);
    A = (Y > W)? Y : W;
    A = 6 - A + 1;
    if(A % 2 == 0)
    {
        A = A / 2;
        B = B / 2;
    }
    if(A % 3 == 0)
    {
        A = A / 3;
        B = B / 3;
    }
    printf("%d/%d", A, B);
    return 0;
}