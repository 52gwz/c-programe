#include <stdlib.h>
#include <stdio.h>
#include <string.h> //用于查找学生信息
typedef struct student
{
    long int id;    //学号
    char name[20];  //姓名
    char sex[10];   //性别
    int math;       //数学
    int english;    //英语
    int chinese;    //语文
    int clanguage;  //C语言
    int sum;        //总分
    double average; //平均分
    int sum1;
    double average1; //各科平均成绩
} Std;
Std stds[1000];

void saveStd();
void openStd();
int main()
{
    stds[0].id = 233;
    scanf("%s", stds[0].name);
    saveStd();
    getchar();
    getchar();
}

void saveStd()
{
    char file_path[260]; //路径
    strcpy(file_path, getenv("userprofile"));
    strcat(file_path, "\\Desktop\\student.ini");
    FILE *fp = fopen(file_path, "w+");
    for (int i = 0; stds[i].name[0] != 0; i++)
    {
        char newdata[] = "id=";
        fwrite(newdata, strlen(newdata), 1, fp);
        itoa(stds[i].id, newdata, 10); //itoa将数字转换成字符串 参数：数字 字符串 进制
        strcat(newdata, ",name=");
        fwrite(newdata, strlen(newdata), 1, fp);
        strcpy(newdata, stds[i].name);
        strcat(newdata, ",sex=");
        strcat(newdata, stds[i].sex);
        strcat(newdata, ",math=");
        fwrite(newdata, strlen(newdata), 1, fp);
        itoa(stds[i].math, newdata, 10);
        strcat(newdata, ",english=");
        fwrite(newdata, strlen(newdata), 1, fp);
        itoa(stds[i].english, newdata, 10);
        strcat(newdata, ";\n");
        fwrite(newdata, strlen(newdata), 1, fp);
        printf("保存成功！请查看用户文件夹下的student.ini~\n");
    }
    fclose(fp);
}

void openStd()
{
    
}