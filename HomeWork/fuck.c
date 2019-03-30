#include <Stdio.h>
int main()
{
    for (int i = 100; i >= 0;i-=20)
    {
        if(!(i%20))
        {
            printf("%d\n", i);
        }
    }
    getchar();
    getchar();
}