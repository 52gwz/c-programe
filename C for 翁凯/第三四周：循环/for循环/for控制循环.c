
#include <stdio.h>
int main()
{
	int a,i;
	int prime=1;
	scanf("%d",&a);
	for(i=2;a>i;i++){
		if(a%i==0){
			//printf("不是素数哦");
			prime=0;
			break;	//continue 中断 break 结束 
		}
	}
	if(prime==1){
		printf("是素数！");
	} else{
		printf("不是素数！");
	}
	return 0;
} 
