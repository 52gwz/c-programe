#include <stdio.h>
int main()
{ 
	int a;	//用户输入的数值
	int x;	//输出的数值
	
	scanf("%d",&a);
	
	while(a!=0){	//条件为是否小于零 
	x=x*10+a%10;	//把数值最后一位取出 并给输出变量 
	a/=10;	//把已经取出的值删除
	}
	printf("%d",x);	//输出得数X 
}
