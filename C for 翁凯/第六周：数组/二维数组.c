#include <stdio.h>
int main()
{
	int number[][3]={//�������У��ڶ���ʱ��ʡ��������
		{1,2,3},
		{5,6,7},
		{6,6,6},
		{9,9,9},
	};	//�����ǵø�;
	int i,j;	//i������ j������
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){//�����i�е���
			printf("[%d]",number[i][j]);
		}
		printf("\n");
	}
	return 0;
}
