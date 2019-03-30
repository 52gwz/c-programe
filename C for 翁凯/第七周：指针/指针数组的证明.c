#include <stdio.h>
void minmax(int *a);	//以为数组本身就是指针，所以不需要&取地址！！ 
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	printf("main*a=%p\n",a);
	minmax(a);
	int *p=a;	//此时p可当a用 
	p[0]=666;
	p[4]=77;
	printf("%d",p[4]);
	return 0;
}
void minmax(int *a)
{
	printf("minmax*a=%p\n",a);
}

