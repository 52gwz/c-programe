#include<stdio.h>
#include<stdlib.h>

/*
	用户指定输入个数
   	  动态分配内存  
*/ 

int main()
{
	int max;
	char * ptd;						//一个中文两个字节 结尾\0 	char类型仅占用1字节 
	char * adc;
	printf("你要输入多少个字节？\n");
	scanf("%d",&max);
	ptd = (char*)malloc(max * sizeof(char));
	printf("为您准备了%d个字节空间\n",max*sizeof(char));
	scanf("%s",ptd);
	adc=ptd;
	printf("%s",adc);
	printf("adc=%p\n",adc);
	printf("ptd=%p\n",ptd);
	
} 
