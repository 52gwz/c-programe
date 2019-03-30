#include <stdio.h>
int main()
{
    int nb[4]={23,0,4,99};
    for (int i = 0; i < 4;i++)
    {
        printf("%d\t", nb[i]);
    }
    for (int i = 0; i < 4;i++)
    {
        for (int j = 0; j < 3;j++)
        {
            if(nb[j]<nb[j+1])
            {
                int temp = nb[j];
                nb[j] = nb[j + 1];
                nb[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t", nb[i]);
    }
    getchar();
    getchar();
}