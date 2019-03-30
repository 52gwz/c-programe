#include <stdio.h>
int main()
{
	int a;
	int bit=1;
	scanf("%d",&a);
	//a%100000 a/1000000 
	//ÇóÎ»Êı£º
	int b=a;
	
	while(b>9){
		bit*=10;
		b/=10;
	} 
	//bit/=10;
	//printf("%d\n",bit);
	while(bit>0){
		printf("%d",a/bit);
		if(bit!=1){
			printf(" ");
		}
		a%=bit;
		bit/=10;
	}	

	return 0;
}
