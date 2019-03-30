#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int number[100];
	int cnt=0;
	int sum=0;
	while(x!=-1){
		number[cnt]=x;
		cnt++;
		sum+=x;
		scanf("%d",&x);
	}
	if(cnt>0){
		printf("%f\n",1.0*sum/cnt);
	}
	int i;
	for(i=0;i<cnt;i++){
		if(number[i]>sum/cnt){
			printf("%d ",number[i]);
		}
	}
	return 0;
}
