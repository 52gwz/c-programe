#include <stdio.h>
int main()
{
	int size=3;
	int board[size][size];
	int i,j;
	int ret=-1;	//输赢结果 -1平局 0 X赢  
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("请输入[%d,%d]位置的数字：",i,j);
			scanf("%d",&board[i][j]);
		}
	}
	//输出棋盘 
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("[%d]",board[i][j]);
		}
		printf("\n");	
	}
	//判断横竖对角 
	int x=0,o=0;	//横向 
	int x2=0,o2=0;	//竖向 
	for(i=0;i<size && ret==-1;i++){
		for(j=0;j<size;j++){
			//横向判断 
			if(board[i][j]==0){
				o++;
			}else{
				x++;
			}
			//竖向判断
			if(board[j][i]==0){
				o2++;
			}else{
				x2++;
			}			 
		}
		o=0;
		o2=0;
		x=0;
		x2=0;
	}
	if(ret==-1){
		//左对角线检查 
		for(i=0;i<size;i++){
			if(board[i][i]==0){
				o++;
			}else{
				x++;
			}
		}
		for(i=0;i<size;i++){
			if(board[i][size-i-1]==0){
				o2++;
			}else{
				x2++;
			}
		}
	}
	if(o==size||o2==size){
			ret=0;
		}else if(x==size||x2==size){
			ret=1;
		}else{
			ret=-1;	//谁都没赢 
		}
	switch(ret){
		case 0:
		printf("O赢了");
		break;
		case 1:
		printf("X赢了");
		break;
		default:
		printf("平局");
	}
	return 0; 
}
