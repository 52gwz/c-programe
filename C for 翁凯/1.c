#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a,z[7];
    srand(time(NULL));
    
    for (int i = 0; i< 7;i++)
    {
        a = rand() % 36 + 1;
        printf("%d\t", a);
        for (int k = 0; k < 7;k++)
        {
            while(1)
            {
            if(z[k]=a)
            {
                
            }
            else
            {
                
            }
            }
        }
            z[i] = a;
    }
    getchar();
}
