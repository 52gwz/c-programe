#include <stdio.h>
void sum(int begin,int end);	//����ԭ�� ���� 

int main()
{
	sum(1,10);
}

void sum(int a,int b)	//ʵ�ʺ���ͷ ���� 
{
	int i;	//i��a��ʼ��b�ۼ� 
	int ret=0;	//��� 
	for(i=a;i<=b;i++){
		ret+=i;
	} 
	printf("%d",ret);
}
