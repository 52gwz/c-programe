#include <stdio.h>
#include <math.h>

int isPrime(int x);

int main()
{
	int x;
	scanf("%d",&x);
	if(isPrime(x)==1){
		printf("������Ŷ");
	}else{
		printf("����������");
	}
	return 0;
	
}

int isPrime(int x){
	int i;
	int ret=1;
	if(x==1||
		(x%2==0&&x!=2))		//1�������� ������2��ż��Ҳ���� || ������������һ�� 
	ret=0;
	for(i=3;i<=sqrt(x);i+=2){	//9�ڽ�ƽ��Ϊ3,3����i �ڿγ���û�й˼� 
		if(x%i==0){
			ret=0;
			break;
		}
	}
	return ret;
	
}
