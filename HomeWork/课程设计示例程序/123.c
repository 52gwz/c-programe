#include <stdio.h>
int main()
{
	struct student
	{
		long int num;  //学号
		char name[10]; //姓名
		int score;	 //成绩
	} max, s[5] = {
			   {201801, "王虎", 88},
			   {201802, "李雪", 76},
			   {201803, "张扬", 90},
			   {201804, "李伟", 74},
			   {201805, "王芳", 69},
		   };
	int i, j;
	printf("你录入的成绩为:\n");
	printf("学号\t姓名\t成绩\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t%s\t%d\n",s[i].num,s[i].name,s[i].score);
	}
	for (i = 0; i < 5 - 1; ++i) //比较n-1轮
	{
		for (j = 0; j < 5 - 1 - i; ++j) //每轮比较n-1-i次,
		{
			if (s[j].score < s[j + 1].score)
			{
				max=s[j];
				s[j]=s[j+1];
				s[j+1]=max;
			}
		}
	}
	printf("\n\n\n\n\n\n\n\n排序后的成绩为:\n");
	printf("学号\t姓名\t成绩\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t%s\t%d\n",s[i].num,s[i].name,s[i].score);
	}
		getchar();
		getchar();
	
}
