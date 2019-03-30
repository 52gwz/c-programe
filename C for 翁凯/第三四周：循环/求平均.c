#include <stdio.h>
int main()
{
	int sum=0;
	int number;
	int count=1;
	scanf("%d",&number);
	sum += number;
	while(number!=-1){
		sum += number;	//要优先进行计算 
		count++;
		scanf("%d",&number);
	}
	printf("%f",1.0*sum/count);//浮点数要用%f 在变量前加1.0* 
}
