#include <stdio.h>
int main()
{
	int x;
	int i;
	int count[10];	//������Ҫ9������ ����ֵΪ9+1 0Ҳ��һ������ 
	for(i=0;i<10;i++){	//��ʼ������ 
		count[i]=0;
	}
	scanf("%d",&x);
	while(x!=-1){
		if(x<=9 && x>=0){
			count[x]++;
		}else{
			printf("�������ֵ���ڷ�Χ��~");
		}
		scanf("%d",&x);
	}
	for(i=0;i<10;i++){
		printf("%d:%d\n",i,count[i]);
	}
	return 0;
}
