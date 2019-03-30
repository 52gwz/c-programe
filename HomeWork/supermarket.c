#include <stdio.h>
#include <windows.h>
void gotoxy(int, int);
int main()
{
    // 将光标移动到 (10, 10)
    gotoxy(10, 10);
    printf("Hello "
           "world");
    getchar();
    getchar();
    return 0;
}

void gotoxy(int x, int y)
{
    COORD pos;
    pos.X = x - 1;
    pos.Y = y - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
