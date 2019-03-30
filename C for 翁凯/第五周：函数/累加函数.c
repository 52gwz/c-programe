#include <stdio.h>

void sum(int begin,int end)
{
	int i;
	int sum=0;
	for(i=begin;i<=end;i++){
		sum+=i; 
	} 
	printf("%dÀÛ¼Óµ½%dÊÇ%d",begin,end,sum);
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	sum(a,b);
	return 0;
}

