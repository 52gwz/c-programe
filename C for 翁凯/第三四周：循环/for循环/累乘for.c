#include <stdio.h>
int main()
{
	int a,i,fact=1;
	scanf("%d",&a);
	for(i=2;a>=i;i++){	//��ʼ���� ѭ���������� ������ִ�� 
		fact*=i;
	}
	printf("%d",fact);
	return 0; 
}
