#include <stdio.h>
int retType(char a);
int main()
{
    char str[100];
    printf("***AI智能计算字符串类型牛逼PLUS***\n");
    gets(str);
    int letter = 0, number = 0, spac = 0, undef = 0;
    for (int i = 0; str[i] != 0; i++)
    {
        switch (retType(str[i]))
        {
        case 1:
            letter++;
            break;
        case 2:
            number++;
            break;
        case 3:
            spac++;
            break;
        default:
            undef++;
            break;
        }
    }
    printf("字符串内包含以下类型\n");
    printf("字母=%d,数字=%d,空格=%d,还有不知道的=%d", letter, number, spac, undef);
    getchar();
    getchar();
}
int retType(char a)
{
    if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
    {
        return 1;
    }
    else if (a >= 48 && a <= 57)
    {
        return 2;
    }
    else if (a == ' ')
    {
        return 3;
    }
    return 0;
}