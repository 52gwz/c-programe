#include <stdio.h>
int main()
{
	int a,b,max;
	printf("��������ֵ��");
	scanf("%d %d",&a,&b);
	if(a<b){
	   max=b;
	}else{
	   max=a;
    }
	printf("���ֵΪ%d",max);
	/*
	����һ��
		max=0;
	if(a>b){
		max=a;
	}
	if(a<b){
		max=b;
	}
	 
	��������
	max=a;
	if(a<b){
	   max=b;
	} 
	
	�������� 
	if(a<b){
	   max=b;
	}else{
	   max=a;
    }
	
	*/ 
	return 0;
}
