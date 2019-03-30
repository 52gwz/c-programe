#include <stdio.h>
int main()
{
	int a,b,i;
	int min,ret;
	scanf("%d %d",&a,&b);
	if(a>b){
		min=a;
	}else{
		min=b;
	}
	for(i=1;i<min;i++){
		if(a%i==0){
			if(b%i==0){
				ret=i;
			}
		}
	}
	printf("%d",ret);
	return 0;
}
