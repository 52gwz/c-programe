#include <stdlib.h>
#include <stdio.h>
#include <string.h> //���ڲ���ѧ����Ϣ
typedef struct student
{
    long int id;     //ѧ��
    char name[20];   //����
    char sex[10];    //�Ա�
    int math = -999; //��ѧ
    int english;     //Ӣ��
    int chinese;     //����
    int clanguage;   //C����
    int sum;         //�ܷ�
    double average;  //ƽ����
    int sum1;
    double average1; //����ƽ���ɼ�
} Std;
Std stds[1000];
Std sta;
void print1();
void choice();
void entering();               //ʵ��¼��ѧ��ѧ�ţ����������Ƴɼ�
void namequery();              //����ѧ����������ѯѧ����Ϣ
void idquery();                //����ѧ����ѧ�Ų�ѯѧ������Ϣ
void print();                  //ʵ��ѭ����ӡѧ����Ϣ
void sum();                    //����ѧ���ɼ����ܷ�
void average();                //����ѧ���ɼ���ƽ����
void Variousbranchesaverage(); //����Ƶ�ƽ���ɼ�
void sort();                   //ѧ����Ϣ����

int main()
{
    choice();
    getchar();
}
void print1()
{
    printf("********************�˵�********************\n");
    printf("��1����¼��ѧ������\t��2������ʾѧ������\n");
    printf("��3��������ѧ�Ų�ѯ\t��4��������������ѯ\n");
    printf("��5���������ƽ����\t��6����ѧ�Ƽ������\n");
    printf("��7����ѧ����������\t��8��������ѧ������\n");
    printf("��9�����鿴ѧ������\t��0�����˳�����ϵͳ\n");
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
        printf("�����������������");
    }
}
void entering()
{
    for (int i = 0; true; i++)
    {
        printf("������ѧ�ţ�");
        scanf("%d", &stds[i].id);
        fflush(stdin); //��������(��Ҫ����ͷ�ļ�stdlib.h)
        printf("������������");
        scanf("%s", stds[i].name);
        fflush(stdin);
        printf("�������Ա�");
        scanf("%s", stds[i].sex);
        fflush(stdin);
        printf("��������ѧ�ɼ���");
        scanf("%d", &stds[i].math);
        fflush(stdin);
        printf("������Ӣ��ɼ���");
        scanf("%d", &stds[i].english);
        fflush(stdin);
        printf("�������������ĳɼ���");
        scanf("%d", &stds[i].chinese);
        fflush(stdin);
        printf("����������C���Գɼ���");
        scanf("%d", &stds[i].clanguage);
        fflush(stdin);
        printf("########�������������-1���ز˵�########");
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
    printf("������Ҫ��ѯ��ѧ����ѧ�ţ�");
    scanf("%s", str);
    for (int i = 0; stds[i].math != -999; i++)
    {

        if (strcmp(str, stds[i].name) == 0)
        {
            printf("-----------------------------------------------------------------\n");
            printf("ѧ�ţ�%d\t������%s\t�Ա�%s\n", stds[i].id, stds[i].name, stds[i].sex);
            printf("��ѧ�ɼ���%d\tӢ��ɼ���%d\t���ĳɼ���%d\n", stds[i].math, stds[i].english, stds[i].chinese);
            printf("C���Գɼ���%d\t�ܷ֣�%d\tƽ���֣�%.2f\n", stds[i].clanguage, stds[i].sum, stds[i].average);
            printf("-----------------------------------------------------------------\n");
            break;
        }
    }
    printf("��Ǹ��û���������ҵ���Ϣ\n");
}
void idquery()
{
    int str;
    printf("������Ҫ��ѯ��ѧ��������");
    scanf("%d", &str);
    for (int i = 0; stds[i].math != -999; i++)
    {

        if (str == stds[i].id)
        {
            printf("-----------------------------------------------------------------\n");
            printf("ѧ�ţ�%d\t������%s\t�Ա�%s\n", stds[i].id, stds[i].name, stds[i].sex);
            printf("��ѧ�ɼ���%d\tӢ��ɼ���%d\t���ĳɼ���%d\n", stds[i].math, stds[i].english, stds[i].chinese);
            printf("C���Գɼ���%d\t�ܷ֣�%d\tƽ���֣�%.2f\n", stds[i].clanguage, stds[i].sum, stds[i].average);
            printf("-----------------------------------------------------------------\n");
            break;
        }
    }
    printf("��Ǹ��û���������ҵ���Ϣ\n");
}
void print()
{
    for (int i = 0; stds[i].math != -999; i++)
    {
        sum();
        average();
        printf("-----------------------------------------------------------------\n");
        printf("ѧ�ţ�%d\t������%s\t�Ա�%s\n", stds[i].id, stds[i].name, stds[i].sex);
        printf("��ѧ�ɼ���%d\tӢ��ɼ���%d\t���ĳɼ���%d\n", stds[i].math, stds[i].english, stds[i].chinese);
        printf("C���Գɼ���%d\t�ܷ֣�%d\tƽ���֣�%.2f\n", stds[i].clanguage, stds[i].sum, stds[i].average);
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
        stds[0].sum += stds[i].math;      //��ѧ�ɼ��ܺ�
        stds[1].sum += stds[i].english;   //Ӣ��ɼ��ܺ�
        stds[2].sum += stds[i].chinese;   //���ĳɼ��ܺ�
        stds[3].sum += stds[i].clanguage; //C���Գɼ��ܺ�
    }
    for (int j = 0; j < 4; j++)
    {
        stds[j].average1 = stds[j].sum / (double)i;
    }
    printf("��ѧ�ɼ�ƽ����:%f\nӢ��ɼ�ƽ����:%f\n���ĳɼ�ƽ����:%f\nC���Գɼ�ƽ����:%f\n", stds[0].average1, stds[1].average1, stds[2].average1, stds[3].average1);
}
void sort()
{
    int z = 0, i, j;
    for (z = 0; stds[z].math != -999; z++)
    {
    }
    for (i = 0; i < z - 1; ++i) //�Ƚ�n-1��
    {
        for (j = 0; j < z - 1 - i; ++j) //ÿ�ֱȽ�n-1-i��,
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