#include <stdio.h>
int main()
{
    int nums[] = {5, 4, 2, 0, 3, 3, 2, 0, 3, 7, 5};
    //5 4 2 3 0 0 6 0
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        for (int j = i + 1; j < 11; j++)
        {
            if (nums[i] == nums[j])
            {
                nums[j] = 'x';
            }
        }
    }
    int temps[11];
    int flag = 0;
    for (int i = 0; i < 11; i++)
    {
        if (nums[i] != 'x')
        {
            temps[flag] = nums[i];
            flag++;
        }
    }
    for (int i = 0; i < flag; i++)
    {
        printf("%d ", temps[i]);
    }
    getchar();
    getchar();
}