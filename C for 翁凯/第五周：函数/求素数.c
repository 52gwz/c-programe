#include <stdio.h>
void isPrime(int a)
{
	int i;
	int prime=1;
	for(i=2;i<a;i++){
		if(a%i==0){
			prime=0;
		}
	}
	if(prime==1){
		printf("%d是素数",a);
	} else{
		printf("%d不是素数",a); 
	}
}

int main()
{
	int a;
	scanf("%d",&a);
	isPrime(a);
	return 0;
}
