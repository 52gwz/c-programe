
#include <stdio.h>
int main()
{
	int a,i;
	int prime=1;
	scanf("%d",&a);
	for(i=2;a>i;i++){
		if(a%i==0){
			//printf("��������Ŷ");
			prime=0;
			break;	//continue �ж� break ���� 
		}
	}
	if(prime==1){
		printf("��������");
	} else{
		printf("����������");
	}
	return 0;
} 
