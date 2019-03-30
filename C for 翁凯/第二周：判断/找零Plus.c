#include <stdio.h>
int main()
{
	float jine=0,mianzhi=0;
	printf("您的消费：");
	scanf("%fl",&jine);
	printf("您的钱包：");
	scanf("%fl",&mianzhi);
	if(jine<=mianzhi){ 
		printf("还剩下%f元",mianzhi-jine);
	}else{ 
		printf("剁手");
	} 
	return 0;
}
