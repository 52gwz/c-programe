#include <stdio.h>
int main()
{
	int size=3;
	int board[size][size];
	int i,j;
	int ret=-1;	//��Ӯ��� -1ƽ�� 0 XӮ  
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("������[%d,%d]λ�õ����֣�",i,j);
			scanf("%d",&board[i][j]);
		}
	}
	//������� 
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("[%d]",board[i][j]);
		}
		printf("\n");	
	}
	//�жϺ����Խ� 
	int x=0,o=0;	//���� 
	int x2=0,o2=0;	//���� 
	for(i=0;i<size && ret==-1;i++){
		for(j=0;j<size;j++){
			//�����ж� 
			if(board[i][j]==0){
				o++;
			}else{
				x++;
			}
			//�����ж�
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
		//��Խ��߼�� 
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
			ret=-1;	//˭��ûӮ 
		}
	switch(ret){
		case 0:
		printf("OӮ��");
		break;
		case 1:
		printf("XӮ��");
		break;
		default:
		printf("ƽ��");
	}
	return 0; 
}
