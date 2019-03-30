#include <stdio.h>
#include <math.h>

int isPrime(int x);

int main()
{
	int x;
	scanf("%d",&x);
	if(isPrime(x)==1){
		printf("是素数哦");
	}else{
		printf("不是素数呢");
	}
	return 0;
	
}

int isPrime(int x){
	int i;
	int ret=1;
	if(x==1||
		(x%2==0&&x!=2))		//1不是素数 不等于2的偶数也不是 || 两个条件满足一个 
	ret=0;
	for(i=3;i<=sqrt(x);i+=2){	//9在解平方为3,3等于i 在课程中没有顾及 
		if(x%i==0){
			ret=0;
			break;
		}
	}
	return ret;
	
}
