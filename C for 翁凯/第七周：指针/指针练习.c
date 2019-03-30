#include <stdio.h>
int main()
{
	int i=123;
	int* p=&i;
	*p=22;	//通过i的地址可以直接赋值 
	printf("%d",&i);
	return 0;
}
