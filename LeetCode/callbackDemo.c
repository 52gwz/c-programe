#include <stdio.h>

int hello(int a)
{
    printf("hello:%d\n", a);
    return 666;
}
void say(int (*pf)(int a))
{
    printf("%d,i just said hello,did you see it?", pf(233));
}
int main()
{
    say(hello);
    getchar();
    getchar();
}