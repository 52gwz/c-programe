#include <stdio.h>
int main(){ 
	//Ã°Åİ
	int i,j;
	int a;
	printf("ÊäÈëÅÅĞòÊıÁ¿\n");
	scanf("%d",&a) ;
	int numb[a];
	for(i=0;i<a;i++){
		scanf("%d",&numb[i]);
	} 
	printf("\n");
	for(i=0;i<sizeof(numb)/4;i++){
		for(j=0;j<sizeof(numb)/4-1;j++){
			if(numb[j] > numb[j+1]){
				a = numb[j];
				numb[j]=numb[j+1];
				numb[j+1] = a;
				printf("%d %d %d %d %d\n",numb[0],numb[1],numb[2],numb[3],numb[4]) ;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d ",numb[i]);
	} 
} 
