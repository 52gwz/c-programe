#include <stdio.h>
int main()
{
    int a[] = {2, 3};
    int *p = a;
    printf("a=%d,b=%d", *p, *p++); // a=3,b=2
    getchar();
    getchar();
}