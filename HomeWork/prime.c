#include <math.h>
#include <stdio.h>
int main()
{
    int x;
    while (true)
    {
        scanf("%d", &x);
        bool isPrime = true;
        for (int i = 2; i <= sqrt(x); i++)
        {
            if (x % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            printf("是素数~\n");
        }
        else
        {
            printf("不是素数~\n");
        }
    }
    getchar();
    getchar();
}