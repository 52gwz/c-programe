#include <stdio.h>
int main()
{
	float jine=0,mianzhi=0;
	printf("�������ѣ�");
	scanf("%fl",&jine);
	printf("����Ǯ����");
	scanf("%fl",&mianzhi);
	if(jine<=mianzhi){ 
		printf("��ʣ��%fԪ",mianzhi-jine);
	}else{ 
		printf("����");
	} 
	return 0;
}
