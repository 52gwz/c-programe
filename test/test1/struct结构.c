#include <stdio.h>

struct sky{
	char* name; 
	int age;
	char* sex;
};

int main(void){
	
	/*
	�����ṹ
	struct loli sora;
	
	�ṹ��ֵ 
	sora.name = "����Ұ�";
	sora.age = 16;
	sora.sex = "famale";
	
	ʡ��������� 0 
	struct loli sora = {.name = "����Ұ�", .sex = "famale"};
	struct loli sora = {.age = 16, .sex = "famale"};
	
	if(sora.name == NULL){
		printf("NULL!\n");
	}else{
		printf("NONULL!\n");
	}	//���ΪNULL! 
	*/
	
	struct sky sora = {.name = "����Ұ�", .age = 16, .sex = "famale"};
	struct sky cosy = {.name = "����Ұ��", .age = 18, .sex = "male"};
	//�ṹ����
	cosy.age = sora.age;
	sora = cosy;
	sora = (struct sky){"����Ұ�",16,"famale"};
	//&�ṹ��ַ 
	struct sky *psora = &sora;
	printf(" %10s %10s %10s \n","����","����","�Ա�"); 
	printf("-------------------------------------\n");
	printf(" %12s %7d %12s \n",sora.name,sora.age,sora.sex);
	printf("-------------------------------------\n");
	printf(" %12s %7d %11s \n",cosy.name,cosy.age,cosy.sex);
	
	return 0;
} 

