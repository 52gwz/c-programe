#include <stdio.h>
//1+1/2+1/2+1/3+1/n 
int main()
{
	double x=0.0;		//���������С����Ҫ��double 
	int i;	//i����n 
	int n=10;
	double sign=1.0; 
	for(i=1;i<=n;i++){
		x+=sign/i;
		sign=-sign;		
	}
	printf("%f",x);		//С������Ҫ��%f���
	return 0; 
}
