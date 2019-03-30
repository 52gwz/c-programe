#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//存储结构：
//id=0,name=陈独秀,sex=男,math=66,english=88;
typedef struct _list //学生信息表
{
    int id;
    char name[20];
    char sex[5];
    int math;
    int english;
    int total;
} List;

typedef struct _std //学生链表
{
    struct _list *list;
    struct _std *next;
} Std;

Std *head = NULL; //链表头
Std *tail = NULL;

void std_add(List *list);  //录入
void std_del(char name[]); //通过姓名删除
void std_show();           //打印
List *std_re(int number);  //修改
void std_rk();             //链表排序
void std_pass();           //统计出不及格成绩
void std_menu();           //打印菜单
void std_save();           //保存学生信息
List *std_open(int read);  //打开学生信息   read为读入次数 方便确定fgets行号

int id = 0; //id号码

int main()
{
    int i;
    char name[10];
    int read = 0; //读入次数 确定行号
    std_menu();
    //循环
    int choice;
    int a;
    List *newlist; //负责传入std_add中转
    while (1)
    {
        printf("请选择操作：");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            i = 0;
            printf("        *开始录入*        \n");
            do
            {
                newlist = (List *)malloc(sizeof(List));
                //printf("结构地址：%p\n", &newlist);
                printf("ID:%d 请输入姓名：", id);
                newlist->id = id;
                scanf("%s", newlist->name);
                printf("请输入性别：");
                scanf("%s", newlist->sex);
                printf("数学成绩：");
                scanf("%d", &newlist->math);
                printf("英语成绩：");
                scanf("%d", &newlist->english);
                newlist->total = newlist->math + newlist->english; //求总成绩
                std_add(newlist);
                printf("########任意数字继续，-1返回菜单########");
                scanf("%d", &i);
            } while (i != -1);
            std_menu();
            break;
        case 2:
            std_show();
            break;
        case 3:
            printf("请输入要删除的姓名：");
            scanf("%s", name);
            std_del(name);
            std_show();
            break;
        case 4:
            std_rk();
            std_menu();
            std_show();
            break;
        case 5:
            printf("请输入学号：");
            scanf("%d", &a);
            //List *relist = ;
            printf("你要修改什么？\n");
            printf("①姓名\t②性别\t③数学\t④英语\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("请输入新的姓名：");
                scanf("%s", std_re(a)->name);
                break;
            case 2:
                printf("请输入新的性别：");
                scanf("%s", std_re(a)->sex);
                break;
            case 3:
                printf("请输入数学成绩：");
                scanf("%d", &std_re(a)->math);
                std_re(a)->total = std_re(a)->math + std_re(a)->english;
                break;
            case 4:
                printf("请输入英语成绩：");
                scanf("%d", &std_re(a)->english);
                std_re(a)->total = std_re(a)->math + std_re(a)->english;
                break;
            }
            std_show();
            break;
        case 6:
            printf("        $$$$以下为不及格学生$$$$        \n");
            std_pass();
            break;
        case 7:
            std_save();
            break;
        case 8:
            while (newlist)
            {
                read++;
                newlist = std_open(read);
                std_add(newlist);
            }
            printf("读入完毕！\n");
            break;
        case 10:
            std_menu();
            break;
        }
    }
    getchar();
    getchar();
}

void std_add(List *mylist)
{
    if (mylist) //判断结构体是否为空
    {
        Std *p = (Std *)malloc(sizeof(Std));
        //printf("%p", p->list);
        p->list = mylist; //链表数据域
        p->next = NULL;
        if (head) //链表指针域
        {
            tail->next = p;
            tail = p;
        }
        else
        {
            head = p;
            tail = p;
        }
        id = tail->list->id + 1; //更新id号码
    }
}

void std_show()
{
    Std *p;
    for (p = head; p; p = p->next)
    {
        printf("----------------------------------------------\n");
        printf("学号：%d        ", p->list->id);
        printf("姓名：%s        ", p->list->name);
        printf("性别：%s\n", p->list->sex);
        printf("数学成绩：%d   ", p->list->math);
        printf("英语成绩：%d      ", p->list->english);
        printf("总分成绩：%d\n", p->list->total);
        printf("----------------------------------------------\n");
    }
}

void std_del(char name[])
{
    Std *p;
    Std *last = NULL;
    for (p = head; p; p = p->next)
    {
        if (strcmp(name, p->list->name) == 0) //找到对应名称的节点
        {
            if (last)
            {
                if (p == tail)
                {
                    tail = last;
                    tail->next = NULL;
                    free(p);
                    break;
                }
                else
                {
                    last->next = p->next;
                    free(p);
                    break;
                }
            }
            else
            {
                head = p->next;
                free(p);
                break;
            }
        }
        last = p;
    }
}

void std_rk()
{
    Std *p;
    Std *p2;
    List *a = NULL; //临时存放数据域
    for (p = head; p; p = p->next)
    {
        for (p2 = head; p2; p2 = p2->next)
        {
            if (p->list->total > p2->list->total) //降序排序
            {
                a = p->list;
                p->list = p2->list;
                p2->list = a;
            }
        }
    }
}
List *std_re(int number)
{
    Std *p;
    for (p = head; p; p = p->next)
    {
        if (p->list->id == number)
        {
            break;
        }
    }
    return p->list;
}
void std_pass()
{
    Std *p;
    for (p = head; p; p = p->next)
    {
        if (p->list->math < 60 || p->list->english < 60)
        {

            printf("----------------------------------------------\n");
            printf("学号：%d        ", p->list->id);
            printf("姓名：%s        ", p->list->name);
            printf("性别：%s\n", p->list->sex);
            printf("数学成绩：%d   ", p->list->math);
            printf("英语成绩：%d      ", p->list->english);
            printf("总分成绩：%d\n", p->list->total);
            printf("----------------------------------------------\n");
        }
    }
}
void std_menu()
{
    system("cls");
    printf("########### 欢迎进入学生管理系统 Ver:1.0 ###########\n");
    printf("        ①录入学生信息\t②打印学生信息\n");
    printf("        ③删除学生信息\t④按照总分排序\n");
    printf("        ⑤修改学生信息\t⑥没有及格学生\n");
    printf("        ⑦保存学生信息\t⑧读取学生信息\n");
    printf("                ⑩返回菜单\n");
}

List *std_open(int read)
{
    List *data_list = (List *)malloc(sizeof(List));
    data_list->id = id;
    id++;
    data_list->math = 0;
    data_list->english = 0;
    char file_path[260]; //路径
    strcpy(file_path, getenv("userprofile"));
    strcat(file_path, "\\student.ini");
    FILE *fp = fopen(file_path, " a+");
    char str[100];    //存储每次得到的一行数据
    char *at;         //指针位置
    char *idat;       //字符串转数字用
    int i, count = 1; //字符串转数字用
    for (i = 0; i < read; i++)
    {
        if (fgets(str, 80, fp) == NULL)
        {
            fclose(fp); //关闭文件
            return NULL;
        }
    }
    printf("%s\n", str);
    //取数据
    idat = at = strstr(str, "=") + 1;
    at = strstr(at, "=") + 1;

    for (i = 0; *at != 44 && *at != 59; i++)
    {
        data_list->name[i] = *at;
        at++;
    }
    data_list->name[i] = '\0';
    at = strstr(at, "=") + 1;
    for (i = 0; *at != 44 && *at != 59; i++)
    {
        data_list->sex[i] = *at;
        at++;
    }
    data_list->sex[i] = '\0';
    count = 1;
    idat = at = strstr(at, "=") + 1;
    while (*idat != 44 && *idat != 59)
    {
        count *= 10;
        idat++;
    }
    for (i = 0; *at != 44 && *at != 59; i++)
    {
        count /= 10;
        data_list->math += (*at - 48) * count;
        at++;
    }

    count = 1;
    idat = at = strstr(at, "=") + 1;
    while (*idat != 44 && *idat != 59)
    {
        count *= 10;
        idat++;
    }
    for (i = 0; *at != 44 && *at != 59; i++)
    {
        count /= 10;
        data_list->english += (*at - 48) * count;
        at++;
    }
    data_list->total = data_list->math + data_list->english;
    //printf("学号：%d 姓名：%s 性别：%s 数学：%d 英语：%d\n", data_list->id, data_list->name, data_list->sex, data_list->math, data_list->english);
    fclose(fp); //关闭文件
    return data_list;
}
void std_save()
{
    char file_path[260]; //路径
    strcpy(file_path, getenv("userprofile"));
    strcat(file_path, "\\student.ini");
    FILE *fp = fopen(file_path, "w+");
    Std *p;
    for (p = head; p; p = p->next)
    {
        char newdata[] = "id=";
        fwrite(newdata, strlen(newdata), 1, fp);
        itoa(p->list->id, newdata, 10); //itoa将数字转换成字符串 参数：数字 字符串 进制
        strcat(newdata, ",name=");
        fwrite(newdata, strlen(newdata), 1, fp);
        strcpy(newdata, p->list->name);
        strcat(newdata, ",sex=");
        strcat(newdata, p->list->sex);
        strcat(newdata, ",math=");
        fwrite(newdata, strlen(newdata), 1, fp);
        itoa(p->list->math, newdata, 10);
        strcat(newdata, ",english=");
        fwrite(newdata, strlen(newdata), 1, fp);
        itoa(p->list->english, newdata, 10);
        strcat(newdata, ";\n");
        fwrite(newdata, strlen(newdata), 1, fp);
        printf("保存成功！请查看用户文件夹下的student.ini~\n");
    }
    fclose(fp);
}