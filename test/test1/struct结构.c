#include <stdio.h>

struct sky{
	char* name; 
	int age;
	char* sex;
};

int main(void){
	
	/*
	声明结构
	struct loli sora;
	
	结构赋值 
	sora.name = "春日野穹";
	sora.age = 16;
	sora.sex = "famale";
	
	省略整形输出 0 
	struct loli sora = {.name = "春日野穹", .sex = "famale"};
	struct loli sora = {.age = 16, .sex = "famale"};
	
	if(sora.name == NULL){
		printf("NULL!\n");
	}else{
		printf("NONULL!\n");
	}	//结果为NULL! 
	*/
	
	struct sky sora = {.name = "春日野穹", .age = 16, .sex = "famale"};
	struct sky cosy = {.name = "春日野悠", .age = 18, .sex = "male"};
	//结构运算
	cosy.age = sora.age;
	sora = cosy;
	sora = (struct sky){"春日野穹",16,"famale"};
	//&结构地址 
	struct sky *psora = &sora;
	printf(" %10s %10s %10s \n","姓名","年龄","性别"); 
	printf("-------------------------------------\n");
	printf(" %12s %7d %12s \n",sora.name,sora.age,sora.sex);
	printf("-------------------------------------\n");
	printf(" %12s %7d %11s \n",cosy.name,cosy.age,cosy.sex);
	
	return 0;
} 

