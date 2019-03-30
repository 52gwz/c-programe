#include <stdio.h>
int main()
/*
f(x)= -1;x<0
      0;x=0
      2x;x>0
*/
{
	int x;
	scanf("%d",&x);
	if(x<0){
	    x=-1;
	}else if(x==0){
		x=0;
	}else{
		x=x*2; 
	}
	printf("%d",x);
}
