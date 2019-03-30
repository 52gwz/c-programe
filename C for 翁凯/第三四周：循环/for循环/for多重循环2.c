#include <stdio.h>

int main()
{
	int cont;	//输出五十个素数的计数器
	int x=2,i;	//x从2开始 1不是素数，i累加直到=x
	
	while(cont<50){	//少于五十个 继续执行 
		int prime=1;	//prime=1为素数 判断条件 注意次prime需要在每次循环中重置！ 
		for(i=2;i<x;i++){	//初始值为i=2;循环继续条件为x小于i;循环结束后i++ 
			if(x%i==0){		//能被其他数取余不是素数 
				prime=0;
				break;
			}
		} 
		if(prime==1){
			printf("%d ",x);	//将素数输出
			cont++;		//每输出一个素数计数+1 
		}
		x++;	//循环结束x++ 
	} 
}
