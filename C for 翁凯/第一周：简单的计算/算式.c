#include <stdio.h>
int main()
{
	int spend=0;
	printf("输入金额:");
	scanf("%d",&spend);
	int zhaoling=100-spend;
	printf("找回%d元。",zhaoling);
	return 0;
}
