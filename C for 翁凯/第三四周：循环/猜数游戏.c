#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int a = rand()%100;	//�����λ����� 
	//printf("%d",a); 
	int number; //�û���������� 
	
	do{ //����Ϊnumber�Ƿ���a��� 
		scanf("%d",&number);
		if(number>a){
			printf("�´��ˣ�\n");
		}else if(number<a){
			printf("��С�ˣ�\n");
		}
	} while(number!=a);	//����� ���� 
	
	printf("�¶���");
	return 0;
}
