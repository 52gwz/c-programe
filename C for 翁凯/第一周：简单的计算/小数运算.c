#include <stdio.h>
int main()
{
	double chi,cun;
	printf("输入尺和寸："); 
	scanf("%lf %lf",&chi,&cun);
	printf("身高是：%f米。",(chi+cun/12)*0.3048);
	return 0;
}
