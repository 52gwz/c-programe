#include <stdio.h>
int main()
{
	int number[][3]={//四行三列，在定义时可省略行数。
		{1,2,3},
		{5,6,7},
		{6,6,6},
		{9,9,9},
	};	//数组后记得跟;
	int i,j;	//i代表列 j代表行
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){//输出第i列的行
			printf("[%d]",number[i][j]);
		}
		printf("\n");
	}
	return 0;
}
