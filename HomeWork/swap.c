#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int a, b;
    printf("Please enter two number:");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("a=%d b=%d",a,b);
    getchar();
    getchar();
}
void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}