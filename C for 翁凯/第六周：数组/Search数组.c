#include <stdio.h>
int search(int x,int a[],int length);	//�ҵ��� ���ҵ����� ����ĳ��� 

int main(){
	int x;
	int a[]={2,4,6,7};
	scanf("%d",&x);
	int lch=search(x,a,sizeof(a)/sizeof(a[0]));
	if(lch==-1){
		printf("�����ڵģ�");
	}else{
		printf("%d�������λ����:%d",x,lch+1); 
	} 
	return 0;
}

int search(int x,int a[],int length){
	int i;
	int ret=-1;
	for(i=0;i<length;i++){	//�������� 
		if(a[i]==x){
			ret=i;
			break;
		}
	}
	return ret;
}
