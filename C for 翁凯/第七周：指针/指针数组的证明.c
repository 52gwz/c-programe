#include <stdio.h>
void minmax(int *a);	//��Ϊ���鱾�����ָ�룬���Բ���Ҫ&ȡ��ַ���� 
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	printf("main*a=%p\n",a);
	minmax(a);
	int *p=a;	//��ʱp�ɵ�a�� 
	p[0]=666;
	p[4]=77;
	printf("%d",p[4]);
	return 0;
}
void minmax(int *a)
{
	printf("minmax*a=%p\n",a);
}

