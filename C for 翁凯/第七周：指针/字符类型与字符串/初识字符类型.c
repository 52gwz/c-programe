#include <stdio.h>
/*	Ascii A=65 B=66 ...
	1=49 2=50 ...
	
#include <stdio.h>
//ascii A=65 B=66 ...
//1=49 2=50 ...
int main()
{
	int i; 
	char a;
	scanf("%d",&i);		//scanf不能直接给char 
	a=i;	//所以要赋给a 
	printf("ASCII:%d=%c",i,a);
	return 0;
} 

*/
int main()
{
	char a;
	scanf("%c",&a); 
	printf("ASCII:%d=%c",a,a);
	return 0;
} 


