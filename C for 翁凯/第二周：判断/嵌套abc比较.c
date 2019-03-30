#include <stdio.h>
int main()
{
	int a,b,c,max; 
	scanf("%d %d %d",&a,&b,&c);
	max=c;
	if(a>b){
		if(a>c)
		max=a;
	}else{
		if(b>c)
		max=b;
	}
	printf("%d",max);
	return 0;
}
