#include <stdio.h>
int main()
{
	int t; 
	printf("����һ����λ����");
	scanf("%d",&t);
	int a=t/1000; //��һλ�� 5
	int b=t%1000/100; // 1
	int c=t%100/10; //2
	int d=t%10; //4
	//printf("%d %d %d %d",a,b,c,d);
	int result=d*1000+c*100+b*10+a;
	printf("�������:%d",result);
	return 0;
}
