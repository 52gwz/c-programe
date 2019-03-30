#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int d, x, z = 0;
    srand((unsigned)time(NULL));
    printf("出现1的时候输入1，出现2的时候输入2，以此类推");
    system("pause");
    system("cls");
    while (1)
    {
        d = rand() % 10;
        if (d >= 0 && d <= 3)
        {
            printf("1");
            x = getch();
            if (x == 49)
            {
                z++;
                system("cls");
            }
            else
            {
                break;
            }
        }
        else if (d > 3 && d < 7)
        {
            printf("\t2");
            x = getch();
            if (x == 50)
            {
                z++;
                system("cls");
            }
            else
            {
                break;
            }
        }
        else if (d > 7 && d <= 10)
        {
            printf("\t\t3");
            x = getch();
            if (x == 51)
            {
                z++;
                system("cls");
            }
            else
            {
                break;
            }
        }
    }
    printf("\n共打到了%d次地鼠", z);
    system("pause");
}