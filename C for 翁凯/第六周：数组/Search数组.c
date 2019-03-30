#include <stdio.h>
int search(int x,int a[],int length);	//找的数 被找的数组 数组的长度 

int main(){
	int x;
	int a[]={2,4,6,7};
	scanf("%d",&x);
	int lch=search(x,a,sizeof(a)/sizeof(a[0]));
	if(lch==-1){
		printf("不存在的！");
	}else{
		printf("%d在数组的位置是:%d",x,lch+1); 
	} 
	return 0;
}

int search(int x,int a[],int length){
	int i;
	int ret=-1;
	for(i=0;i<length;i++){	//遍历数组 
		if(a[i]==x){
			ret=i;
			break;
		}
	}
	return ret;
}
