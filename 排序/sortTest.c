#include <stdio.h>
int main()
{
    int a[10];
    int i, j, t;
    printf("please input 10 numbers:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);  
    printf("\n");
    for (j = 0; j < 9; j++)         //进行9次循环，实现9次比较
        for (i = 0; i < 9 - j; j++) //在每一次比较中在进行9-j次比较
            if (a[i] > a[i + 1])    //相邻两数比较大的下沉即交换
            {
                t = a[i + 1];
                a[i + 1] = a[i];
                a[i] = t;
            }
    printf("the sorted numbers :\n");
    for (i = 0; i < 10; i++)
        printf("%d", a[i]);
    printf("\n");
    getchar();
    getchar();
}