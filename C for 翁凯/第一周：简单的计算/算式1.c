#include <stdio.h>
int main()
{
	const int MIANZHI = 1000; //const 常量  
	int huafei; 
	printf("请输入金额：");
	scanf("%d",&huafei);
	int zhaoling = MIANZHI - huafei;
	printf("找您%d元~",zhaoling);
	return 0;
} 
