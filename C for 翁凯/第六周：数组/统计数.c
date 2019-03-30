#include <stdio.h>
int main()
{
	int x;
	int i;
	int count[10];	//假如需要9个变量 数组值为9+1 0也是一个变量 
	for(i=0;i<10;i++){	//初始化数组 
		count[i]=0;
	}
	scanf("%d",&x);
	while(x!=-1){
		if(x<=9 && x>=0){
			count[x]++;
		}else{
			printf("您输入的值不在范围内~");
		}
		scanf("%d",&x);
	}
	for(i=0;i<10;i++){
		printf("%d:%d\n",i,count[i]);
	}
	return 0;
}
