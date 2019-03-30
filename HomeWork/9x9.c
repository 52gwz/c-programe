#include <stdio.h>
int main()
{
    //三种
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            printf("%dx%d=%d ", i, j, i * j);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= 9; i++)
    {
        for (int j = i; j <= 9; j++)
        {
            printf("%dx%d=%d ", i, j, i * j);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%dx%d=%d ", i, j, i * j);
        }
        printf("\n");
    }
    getchar();
}