#include <stdio.h>
int main()
{
	int soure;
	scanf("%d",&soure);
	if(soure==0)
		printf("早上好");
	else if(soure==1) 
		printf("上午好");
	else if(soure==2)
		printf("中午好");
	else
		printf("w晚上好");
	return 0; 
}
