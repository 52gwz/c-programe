#include <stdio.h>
//1+1/2+1/2+1/3+1/n 
int main()
{
	double x=0.0;		//输出的数有小数就要用double 
	int i;	//i代表n 
	int n=10;
	double sign=1.0; 
	for(i=1;i<=n;i++){
		x+=sign/i;
		sign=-sign;		
	}
	printf("%f",x);		//小数类型要用%f输出
	return 0; 
}
