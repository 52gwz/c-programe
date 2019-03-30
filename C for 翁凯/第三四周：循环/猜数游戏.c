#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int a = rand()%100;	//输出两位随机数 
	//printf("%d",a); 
	int number; //用户输入的数字 
	
	do{ //条件为number是否与a相等 
		scanf("%d",&number);
		if(number>a){
			printf("猜大了！\n");
		}else if(number<a){
			printf("猜小了！\n");
		}
	} while(number!=a);	//不相等 跳出 
	
	printf("猜对了");
	return 0;
}
