    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        //输入20个1～90的整数，分类统计1～30、31～60、61～90的数各有多少个？
        int count[3] = {0};
        int x;
        for (int i = 0; i < 20; i++)
        {
            printf("1~30 = %d\t31~60 = %d\t61~90 = %d\n", count[0], count[1], count[2]);
            printf("\t     请输入单位整数：");
            scanf("%d", &x);
            if (x >= 1 && x <= 30)
            {
                count[0]++;
            }
            else if (x >= 31 && x <= 60)
            {
                count[1]++;
            }
            else if (x >= 61 && x <= 90)
            {
                count[2]++;
            }
            system("cls");
        }
    }
