#include <stdio.h>

int main()
{
    int i = 3;
    int a = (i++)+(i++);
    printf("%d",a);
    getchar();
    getchar();
}
