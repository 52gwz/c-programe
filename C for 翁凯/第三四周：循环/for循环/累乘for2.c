#include <stdio.h>
int main()
{
	int a,fact=1;
	scanf("%d",&a);
	for(;a>1;a--){		//��ʼ���� ѭ���������� ������ִ�� 
		fact*=a;
	}
	printf("%d",fact);
	return 0;
}
