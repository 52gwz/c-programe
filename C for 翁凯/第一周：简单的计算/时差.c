#include <stdio.h>
int main()
{
	int hour,minute,hour2,minute2,t1,t2,t;
	printf("�����һ��ֵ��Сʱ ���ӣ� ��");
	scanf("%d %d",&hour,&minute);
	printf("����ڶ���ֵ��");
	scanf("%d %d",&hour2,&minute2);
	t1=hour*60+minute;
	t2=hour2*60+minute2;
	if(t1<t2){
		t=t2-t1;
	}else{
		t=t1-t2;
	}
	printf("ʱ����%dСʱ%d��",t/60,t%60);
	return 0; 
}
