#include <stdio.h>
int main()
{
	int i=123;
	int* p=&i;
	*p=22;	//ͨ��i�ĵ�ַ����ֱ�Ӹ�ֵ 
	printf("%d",&i);
	return 0;
}
