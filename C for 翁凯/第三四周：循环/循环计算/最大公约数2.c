#include <stdio.h>
/*
a  b  ret
12 18 12
18 12 6
12 6 0
*/
int main()
{
	int a,b,t;
	scanf("%d %d",&a,&b);
	while(b!=0){
			t=a%b;
			a=b;
			b=t;

	}
	printf("%d",a);
	return 0;
}
