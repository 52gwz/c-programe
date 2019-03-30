#include <stdio.h>
int main()
{
    /*有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13，…，求出这个序列的前20项之和*/
    double k = 2.0, n = 1.0;
    double count;
    for (int i = 0; i < 20; i++)
    {
        count += k / n;
        int temp = n;
        n = k;
        k += temp;
    }
    printf("%f", count);
    getchar();
}