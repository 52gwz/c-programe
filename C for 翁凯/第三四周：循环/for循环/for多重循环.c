#include <stdio.h>
int main()
{
	int a,i;
	for(a=2;a<100;a++){
	int prime=1;		//	ѭ����ע������Ƿ���ѭ���У� 
	//scanf("%d",&a);
	for(i=2;a>i;i++){
		if(a%i==0){
			prime=0;
			break;
		}
	}
	if(prime==1){
		printf("%d ",a);
	}
	}
}
