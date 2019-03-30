#include <stdio.h>
int main()
{
	int a,i,fact=1;
	scanf("%d",&a);
	for(i=2;a>=i;i++){	//初始条件 循环继续条件 结束后执行 
		fact*=i;
	}
	printf("%d",fact);
	return 0; 
}
