#include <stdio.h>
int main()
{
	int a,fact=1;
	scanf("%d",&a);
	for(;a>1;a--){		//初始条件 循环继续条件 结束后执行 
		fact*=a;
	}
	printf("%d",fact);
	return 0;
}
