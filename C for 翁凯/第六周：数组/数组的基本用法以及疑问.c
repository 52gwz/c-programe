#include <stdio.h>
//tips:
//使用数组的基本流程 
//数组大小的定义一定是常量吗？
//结果:不是，但是数组一但定义大小就不可以改变了 
int main()
{
	int a=10;
	//const int a = 10;
	int x[10]={0} ;	//**初始化数组x,C99特性** 
	//初始化数组：
	/*
	int i; 
	for(i=0;i<10;i++){
		x[i]=0;
	}
	*/
	//数组参与运算 
	for(i=0;i<10;i++){
		x[i]++;
	}
	//遍历数组
	for(i=0;i<10;i++){
		printf("%d",x[i]);
	}
	return 0;
}
