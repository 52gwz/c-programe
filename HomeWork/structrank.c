#include <stdio.h>
#include <string.h>
typedef struct student
{
    int num;       //学号
    char name[10]; //姓名
    int score;     //成绩
} Student;
int getStudent(Student *students, int length, char name[]);
void studentRank(Student *students, int length);
int main()
{
    Student students[] =
        {
            {201801, "王虎", 88},
            {201802, "李雪", 76},
            {201803, "张扬", 90},
            {201804, "李伟", 74},
            {201805, "王芳", 69},
            {201806, "安柏华", 69}};
    studentRank(students, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("学号：%d\t姓名：%s\t成绩：%d\n", students[i].num, students[i].name, students[i].score);
    }
    printf("请输入姓名：");
    char name[10];
    scanf("%s", name);
    int i = getStudent(students, 5, name);
    printf("学号：%d\t姓名：%s\t成绩：%d\n", students[i].num, students[i].name, students[i].score);
    getchar();
    getchar();
}
int getStudent(Student *students, int length, char name[])
{
    int flag = 0;
    for (int i = 0; i < length; i++)
    {
        if (!(strcmp(students[i].name, name)))
        {
            flag = i;
        }
    }
    return flag;
}
void studentRank(Student *students, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
               if (students[j].score < students[j + 1].score)
            {
                Student temp;
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}