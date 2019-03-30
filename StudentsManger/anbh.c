#include <stdlib.h>
#include <stdio.h>
#include <string.h> //用于查找学生信息
typedef struct student
{
    long int id;     //学号
    char name[20];   //姓名
    char sex[10];    //性别
    int math = -999; //数学
    int english;     //英语
    int chinese;     //语文
    int clanguage;   //C语言
    int sum;         //总分
    double average;  //平均分
    int sum1;
    double average1; //各科平均成绩
} Std;
Std stds[1000];
Std sta;
void print1();
void choice();
void entering();               //实现录入学生学号，姓名，各科成绩
void namequery();              //按照学生的姓名查询学生信息
void idquery();                //按照学生的学号查询学生的信息
void print();                  //实现循环打印学生信息
void sum();                    //计算学生成绩的总分
void average();                //计算学生成绩的平均分
void Variousbranchesaverage(); //求各科的平均成绩
void sort();                   //学生信息排序

int main()
{
    choice();
    getchar();
}
void print1()
{
    printf("********************菜单********************\n");
    printf("按1键：录入学生档案\t按2键：显示学生档案\n");
    printf("按3键：按照学号查询\t按4键：按照姓名查询\n");
    printf("按5键：求各科平均分\t按6键：学科及格概率\n");
    printf("按7键：学生档案排序\t按8键：保存学生档案\n");
    printf("按9键：查看学生档案\t按0键：退出管理系统\n");
    printf("********************************************\n");
}
void choice()
{
    int choice;
    scanf("%d", &choice);
   
    switch (choice)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        break;
    case 0:
        break;
    default:
        printf("输入错误请重新输入");
    }
}
void entering()
{
    for (int i = 0; true; i++)
    {
        printf("请输入学号：");
        scanf("%d", &stds[i].id);
        fflush(stdin); //清理缓存区(需要调用头文件stdlib.h)
        printf("请输入姓名：");
        scanf("%s", stds[i].name);
        fflush(stdin);
        printf("请输入性别：");
        scanf("%s", stds[i].sex);
        fflush(stdin);
        printf("请输入数学成绩：");
        scanf("%d", &stds[i].math);
        fflush(stdin);
        printf("请输入英语成绩：");
        scanf("%d", &stds[i].english);
        fflush(stdin);
        printf("请输入姓名语文成绩：");
        scanf("%d", &stds[i].chinese);
        fflush(stdin);
        printf("请输入姓名C语言成绩：");
        scanf("%d", &stds[i].clanguage);
        fflush(stdin);
        printf("########按任意键继续，-1返回菜单########");
        if (getchar() == -1)
        {
            break;
        }
        system("CLS");
    }
}
void namequery()
{
    char str[20];
    printf("请输入要查询的学生的学号：");
    scanf("%s", str);
    for (int i = 0; stds[i].math != -999; i++)
    {

        if (strcmp(str, stds[i].name) == 0)
        {
            printf("-----------------------------------------------------------------\n");
            printf("学号：%d\t姓名：%s\t性别：%s\n", stds[i].id, stds[i].name, stds[i].sex);
            printf("数学成绩：%d\t英语成绩：%d\t语文成绩：%d\n", stds[i].math, stds[i].english, stds[i].chinese);
            printf("C语言成绩：%d\t总分：%d\t平均分：%.2f\n", stds[i].clanguage, stds[i].sum, stds[i].average);
            printf("-----------------------------------------------------------------\n");
            break;
        }
    }
    printf("抱歉，没有你所查找的信息\n");
}
void idquery()
{
    int str;
    printf("请输入要查询的学生姓名：");
    scanf("%d", &str);
    for (int i = 0; stds[i].math != -999; i++)
    {

        if (str == stds[i].id)
        {
            printf("-----------------------------------------------------------------\n");
            printf("学号：%d\t姓名：%s\t性别：%s\n", stds[i].id, stds[i].name, stds[i].sex);
            printf("数学成绩：%d\t英语成绩：%d\t语文成绩：%d\n", stds[i].math, stds[i].english, stds[i].chinese);
            printf("C语言成绩：%d\t总分：%d\t平均分：%.2f\n", stds[i].clanguage, stds[i].sum, stds[i].average);
            printf("-----------------------------------------------------------------\n");
            break;
        }
    }
    printf("抱歉，没有你所查找的信息\n");
}
void print()
{
    for (int i = 0; stds[i].math != -999; i++)
    {
        sum();
        average();
        printf("-----------------------------------------------------------------\n");
        printf("学号：%d\t姓名：%s\t性别：%s\n", stds[i].id, stds[i].name, stds[i].sex);
        printf("数学成绩：%d\t英语成绩：%d\t语文成绩：%d\n", stds[i].math, stds[i].english, stds[i].chinese);
        printf("C语言成绩：%d\t总分：%d\t平均分：%.2f\n", stds[i].clanguage, stds[i].sum, stds[i].average);
        printf("-----------------------------------------------------------------\n");
    }
}
void sum()
{
    for (int i = 0; stds[i].math != -999; i++)
    {
        stds[i].sum = stds[i].math + stds[i].english + stds[i].chinese + stds[i].clanguage;
    }
}
void average()
{
    for (int i = 0; stds[i].math != -999; i++)
    {
        stds[i].average = stds[i].sum / 4.0;
    }
}
void Variousbranchesaverage()
{
    int i = 0;
    for (i = 0; stds[i].math != -999; i++)
    {
        stds[0].sum += stds[i].math;      //数学成绩总和
        stds[1].sum += stds[i].english;   //英语成绩总和
        stds[2].sum += stds[i].chinese;   //语文成绩总和
        stds[3].sum += stds[i].clanguage; //C语言成绩总和
    }
    for (int j = 0; j < 4; j++)
    {
        stds[j].average1 = stds[j].sum / (double)i;
    }
    printf("数学成绩平均分:%f\n英语成绩平均分:%f\n语文成绩平均分:%f\nC语言成绩平均分:%f\n", stds[0].average1, stds[1].average1, stds[2].average1, stds[3].average1);
}
void sort()
{
    int z = 0, i, j;
    for (z = 0; stds[z].math != -999; z++)
    {
    }
    for (i = 0; i < z - 1; ++i) //比较n-1轮
    {
        for (j = 0; j < z - 1 - i; ++j) //每轮比较n-1-i次,
        {
            if (stds[j].id > stds[j + 1].id)
            {
                sta = stds[j];
                stds[j] = stds[j + 1];
                stds[j + 1] = sta;
            }
        }
    }
}