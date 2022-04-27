#include <stdio.h>

int main()
{
    int n = 10;

    for (int i = 1; i < n; i++)
    {
        for (int j = n; j >= i; j--)
            j == i ? printf("* ") : printf("  ");

        if (i != 1)
        {
            for (int j = 1; j < i - 1; j++)
                printf("  ");
            for (int j = 1; j <= i; j++)
                j == i ? printf("* ") : printf("  ");
        }

        printf("\n");
    }

    for (int i = 1; i <= n; i++)
        printf("*   ");
    printf("\n");
    for (int i = 1; i < (2 * n); i++)
        printf("* ");
    printf("\n");

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
            j == i ? printf("  *") : printf("  ");

        if (i == n - 1)
            break;

        for (int j = i; j < n - 2; j++)
            printf("  ");
        for (int j = i; j < n; j++)
            j == n - 1 ? printf(" *") : printf("  ");

        printf("\n");
    }

    return 0;
}
