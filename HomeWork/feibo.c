#include <stdio.h>

int main()
{
    int n = 0, k = 1;
    for (int count; count < 20; count++)
    {
        printf("%d ", n + k);
        int temp = n;
        n += k;
        k = temp;
    }
    getchar();
}