#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void NQueen(int *x, int k, int n);

bool place(int *x, int k, int i)
{
    for (int j = 1; j < k; j++)
    {
        if (x[j] == i || abs(x[j] - i) == abs(j - k))
        {
            return false;
        }
    }
    return true;
}

void NQueen(int *x, int k, int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (place(x, k, i))
        {
            x[k] = i;
            if (k == n)
            {
                for (int j = 1; j <= n; j++)
                {
                    printf("%d\t", x[j]);
                }
                printf("\n");
            }
            else
            {
                NQueen(x, k + 1, n);
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the no. of Queens: ");
    scanf("%d", &n);
    int x[n + 1];
    NQueen(x, 1, n);
    return 0;
}