#include <stdio.h>
int main()
{
	int sum=0;
	int number;
	int count=1;
	scanf("%d",&number);
	sum += number;
	while(number!=-1){
		sum += number;	//Ҫ���Ƚ��м��� 
		count++;
		scanf("%d",&number);
	}
	printf("%f",1.0*sum/count);//������Ҫ��%f �ڱ���ǰ��1.0* 
}
