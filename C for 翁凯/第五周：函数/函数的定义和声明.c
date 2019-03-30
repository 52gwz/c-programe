#include <stdio.h>
void sum(int begin,int end);	//函数原型 声明 

int main()
{
	sum(1,10);
}

void sum(int a,int b)	//实际函数头 定义 
{
	int i;	//i从a开始到b累加 
	int ret=0;	//结果 
	for(i=a;i<=b;i++){
		ret+=i;
	} 
	printf("%d",ret);
}
