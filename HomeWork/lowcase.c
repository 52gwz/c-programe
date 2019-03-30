#include <stdio.h>
#include <malloc.h>
int lowcase(char capital);
int main()
{
    char capital;
    while (1)
    {
        printf("请输入一个大写字母:");
        scanf("%s", &capital);  //输入方式不符合规范 缓冲会跳到下一轮
        if (lowcase(capital))
        {
            printf("%c\n", lowcase(capital));
        }
        else
        {
            printf("你输入的不是大写字母\n");
        }
    }

    getchar();
    getchar();
}
int lowcase(char capital)
{
    if (capital <= 90 && capital >= 65)
    {
        return capital += 32;
    }
    return 0;
}