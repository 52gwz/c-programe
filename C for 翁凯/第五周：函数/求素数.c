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
		printf("%d������",a);
	} else{
		printf("%d��������",a); 
	}
}

int main()
{
	int a;
	scanf("%d",&a);
	isPrime(a);
	return 0;
}
