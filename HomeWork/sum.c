#include <stdio.h>
#define X 4 //成绩门数
int main()
{
    int score[X - 1], sum;
    double avg;
    int i = 0;
    for (; i < X; i++)
    {
        printf("请输入第%d门成绩：", i + 1);
        scanf("%d", &score[i]);
    }
    for (i = 0; i < X; i++)
    {
        sum += score[i];
    }
    avg = sum / (X + 0.0);
    printf("总成绩为：%d 平均成绩为：%.2f", sum, avg);
    getchar();
    getchar();
}