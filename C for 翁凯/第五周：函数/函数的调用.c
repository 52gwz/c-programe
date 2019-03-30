#include <stdio.h>

int max(int a,int b) 
{
	int ret;
	if(a>b){
		ret=a;
	//return a; 
	}else{
		ret=b;
	//return b;
	}
	return ret;	
}


int main()
{
	int a=5,b=6;
	printf("最大值为：%d",max(a,b));
	//printf("%d",max(a,123));
	//printf("%d",max(123,456));
	return 0;
}
