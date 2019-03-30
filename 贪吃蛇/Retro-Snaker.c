#include <conio.h> //getch()
#include <stdio.h>
#include <stdlib.h>
#include <time.h>   //srand()
#include <unistd.h> //Sleep
#include <windows.h>
//地图大小 可以修改
#define X 20
#define Y 50
typedef struct _snake
{
    int x, y;
    struct _snake *next;
} Snake;

typedef struct _list
{
    Snake *head; //蛇头
    Snake *tail; //蛇尾
    int fx, fy;  //食物
    int sp;      //蛇头的方向 初始为左
} List;

int score; //分数

void snake_set(List *list); //初始化蛇(包括食物)

void snake_move(List *list, int up); //up为移动方向

void map_set(void); //初始化地图

void map_refresh(List *list); //打印整个地图

void food_set(List *list); //随机生成食物

int game_over(List *list); //自刎返回1 撞墙返回2

int main()
{
    List list;
    list.sp = 75;                 //蛇头方向
    list.head = list.tail = NULL; //蛇头蛇尾链表
    snake_set(&list);             //初始化蛇
    map_set();                    //初始化地图
    food_set(&list);              //初始化食物
    map_refresh(&list);           //刷新蛇
    //用户操作
    int up;
    while (1)
    {
        if (_kbhit())
        {
            up = getch();
            if (up == 72 || up == 80 || up == 75 || up == 77) //屏蔽除了上下左右以外的ascii码
            {
                //不能走反方向
                if ((list.sp == 75 && up != 77) || (list.sp == 72 && up != 80) || (list.sp == 80 && up != 72) || (list.sp == 77 && up != 75))
                {
                    snake_move(&list, up);
                    if (game_over(&list)) //判断是否死亡
                    {
                        break;  
                    }
                    map_refresh(&list);
                }
            }
        }
        else
        {
            snake_move(&list, list.sp);
            if (game_over(&list))
            {
                break;
            }
            map_refresh(&list);
        }
        Sleep(100); //数值越小 难度越高
    }
    system("cls");
    printf(" _____       ___       ___  ___   _____        _____   _     _   _____   _____   \n");
    printf("/  ___|     /   |     /   |/   | | ____|      /  _  \\ | |   / / | ____| |  _  \\  \n");
    printf("| |        / /| |    / /|   /| | | |__        | | | | | |  / /  | |__   | |_| |  \n");
    printf("| |  _    / / | |   / / |__/ | | |  __|       | | | | | | / /   |  __|  |  _  /  \n");
    printf("| |_| |  / /  | |  / /       | | | |___       | |_| | | |/ /    | |___  | | \\ \\  \n");
    printf("\\_____/ /_/   |_| /_/        |_| |_____|      \\_____/ |___/     |_____| |_|  \\_\\ \n");
    printf("\n*********************************你的分数：%-4d*********************************", score);
    getchar();
}

void snake_set(List *list) //初始化蛇
{
    int x = 10, y;
    for (y = 18; y < 22; y++)
    {
        Snake *p = (Snake *)malloc(sizeof(Snake));
        p->x = x;
        p->y = y;
        p->next = NULL;
        if (list->head)
        {
            list->tail->next = p;
            list->tail = p;
        }
        else
        {
            list->head = p;
            list->tail = p;
        }
    }
}

void snake_move(List *list, int up)
{
    Snake *p = (Snake *)malloc(sizeof(Snake));
    switch (up)
    {
    case 72: //上移
        //插头
        p->x = list->head->x - 1;
        p->y = list->head->y;
        p->next = list->head;
        list->head = p;
        list->sp = 72; //改变方向
        break;
    case 80: //下移
        p->x = list->head->x + 1;
        p->y = list->head->y;
        p->next = list->head;
        list->head = p;
        list->sp = 80;
        break;
    case 75: //左移
        p->x = list->head->x;
        p->y = list->head->y - 1;
        p->next = list->head;
        list->head = p;
        list->sp = 75;
        break;
    case 77: //右移
        p->x = list->head->x;
        p->y = list->head->y + 1;
        p->next = list->head;
        list->head = p;
        list->sp = 77;
        break;
    }
    //判断是否吃到食物
    if (list->head->x == list->fx && list->head->y == list->fy)
    {
        score += 100; //吃到食物加分
        food_set(list);
    }
    else
    {
        Snake *p2 = NULL;
        for (p2 = list->head; p2->next != list->tail; p2 = p2->next)
            ; //遍历到尾部前一个
        //去掉尾巴
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){(short)list->tail->y, (short)list->tail->x});
        printf(" ");
        free(list->tail);
        list->tail = p2;
        p2->next = NULL;
    }
    //去尾(判断是否吃到食物 吃到不去尾)
}

void map_set(void)
{
    for (int x = 0; x < X; x++)
    {
        for (int y = 0; y < Y; y++)
        {
            if (y == 0 || x == 0 || x == X - 1 || y == Y - 1)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void map_refresh(List *list)
{
    //把蛇和食物打印到地图中
    //链表进数组
    Snake *p = list->head;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){(short)p->y, (short)p->x});
    printf("@");
    // map[p->x][p->y] = '@';
    for (p = p->next; p; p = p->next)
    {
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){(short)p->y, (short)p->x});
        // map[p->x][p->y] = 'O';
        printf("O");
    }
    //食物：
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){(short)list->fy, (short)list->fx});
    printf("*");

}

void food_set(List *list)
{
    srand((int)time(NULL));
    list->fx = (rand() % 16) + 1;
    list->fy = (rand() % 38) + 1;
}

int game_over(List *list)
{
    //判断是否自刎
    Snake *p;
    for (p = list->head->next; p; p = p->next)
    {
        if (list->head->x == p->x && list->head->y == p->y)
        {
            return 1; //吃到自己
        }
    }
    //判断是否撞墙
    p = list->head;
    if (p->x == 0 || p->y == 0 || p->x == X - 1 || p->y == Y - 1) //边界条件
    {
        return 2;
    }
    return 0;
}