#include <stdio.h>
int main(){
	int i=6;
	int *prt;
	prt=&i;
	printf("%p\n",&(*prt));
	printf("%p\n",*prt);
	printf("%p",&i);
} 
