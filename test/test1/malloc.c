#include<stdio.h>
#include<stdlib.h>

/*
	�û�ָ���������
   	  ��̬�����ڴ�  
*/ 

int main()
{
	int max;
	char * ptd;						//һ�����������ֽ� ��β\0 	char���ͽ�ռ��1�ֽ� 
	char * adc;
	printf("��Ҫ������ٸ��ֽڣ�\n");
	scanf("%d",&max);
	ptd = (char*)malloc(max * sizeof(char));
	printf("Ϊ��׼����%d���ֽڿռ�\n",max*sizeof(char));
	scanf("%s",ptd);
	adc=ptd;
	printf("%s",adc);
	printf("adc=%p\n",adc);
	printf("ptd=%p\n",ptd);
	
} 
