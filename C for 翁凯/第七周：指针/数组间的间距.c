#include<stdio.h>
int main()
{
	int a[2]={1,2};
	printf("a[0]=%p\n",&a[0]);	//单独的一个数组就是变量 需要加&取地址 
	printf("a[1]=%p\n",&a[1]);
	return 0; 
} 
