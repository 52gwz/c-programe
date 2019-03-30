#include <stdio.h>
#include <math.h>
int fact(int n);

int main()
{
    printf("%d",fact(0));
    getchar();

}

int fact (int n){
    if(n==0||n==1)
    {
        return 1;
    }
    return n * fact(n - 1);
}