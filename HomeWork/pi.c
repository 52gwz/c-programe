#include <stdio.h>
#define PI 3.14
int main()
{
    double c, s, v, r=2.5;
    c = 2 * PI * r;
    s = PI * r * r;
    v = 3 * PI * r * r * r / 4;
    printf("周长：%.2f\t面积：%.2f\t体积：%.2f",c,s,v);
    getchar();
    getchar();
}