#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    printf("Enter Reference: ");
    scanf("%s", &a);
    printf("Enter Pattern: ");
    scanf("%s", &b);
    int m = strlen(a);
    int n = strlen(b);
    for (int i = 0; i < m; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (a[i + j] != b[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            printf("Pattern found with %d shifts.\n", i);
        }
    }
    return 0;
}
