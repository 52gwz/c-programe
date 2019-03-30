#include <stdio.h>
int main()
{
	int a,i=1,fact;
	scanf("%d",&a);
	while(a>=i){
		fact*=i;
		i++;
	}
	printf("%d",fact);
	return 0;
}
