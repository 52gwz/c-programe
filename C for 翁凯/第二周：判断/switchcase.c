#include <stdio.h>
int main()
{
	int soure;
	scanf("%d",&soure);
	soure/=10;
	switch ( soure ){
		case 10:
			printf("Âú·ÖÅ£±Æ£¡");
			break;
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
		case 6:
			printf("C");
			break;
		default:
			printf("FFF"); 
	}
	return 0;
}
