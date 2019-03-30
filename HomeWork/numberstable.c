#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100
struct student //定义学生类型结构体
{
    char num[11];
    char name[9];
    int score;
};
int main()
{
    struct student s[N], t;
    int n, i, flag = 0; //i 菜单 n 人数 j ? k
    while (1)
    {
        system("CLS");
        printf("\n\n\n\n\t1.录入学生信息.\n");
        printf("\t2.输出学生信息.\n");
        printf("\t3.输出最高分学生信息.\n");
        printf("\t4.查找学生姓名.\n");
        printf("\t0.退出.\n");
        scanf("%d", &i);
        switch (i)
        {
        case 1: //输入学生数据
            // printf("请输入该班的人数");
            // scanf("%d", &n);
            printf("请输入学号 姓名 成绩\n");
            scanf("%s%s%d", &s[flag].num, &s[flag].name, &s[flag].score);
            flag++;
            break;

        case 2: //输出数组中所有学生数据
            for (int j = 0; j < flag; j++)
            {
                printf("%s\t%s\t%d\n", s[j].num, s[j].name, s[j].score);
            }
            getchar();
            getchar();
            break;

        case 3: //查找最高分学学生信息
            t = s[0];
            for (int j = 0; j < flag; j++)
            {
                if (t.score < s[j].score)
                {
                    t = s[j];
                }
            }
            printf("%s\t%s\t%d\t", t.num, t.name, t.score);
            getchar();
            getchar();
            break;

        case 4: //按学生姓名查找学生信息的函数
            printf("请输入要查询的学生的姓名");
            char name[20];
            scanf("%s", name);
            for (i = 0; i < n; i++)
                if (strcmp(s[i].name, name) == 0)
                {
                    flag = 1;
                    printf("%10s%10s%6d", s[i].num, s[i].name, s[i].score);
                }
            if (flag == 0)
                printf("查无此人");
            getchar();
            getchar();
            break;

        case 0:
            exit(0);
        }
    }
}
