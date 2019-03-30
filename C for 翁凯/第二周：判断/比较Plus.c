#include <stdio.h>
int main()
{
	int a,b,max;
	printf("输入两个值：");
	scanf("%d %d",&a,&b);
	if(a<b){
	   max=b;
	}else{
	   max=a;
    }
	printf("最大值为%d",max);
	/*
	方案一：
		max=0;
	if(a>b){
		max=a;
	}
	if(a<b){
		max=b;
	}
	 
	方案二：
	max=a;
	if(a<b){
	   max=b;
	} 
	
	方案三： 
	if(a<b){
	   max=b;
	}else{
	   max=a;
    }
	
	*/ 
	return 0;
}
