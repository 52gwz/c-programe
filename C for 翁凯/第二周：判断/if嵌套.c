#include <stdio.h>
int main()
{
	int user,password;
	printf("user password:");
	scanf("%d %d",&user,&password);
	if(user==3222){
		if(password==1234){
			printf("user password ture!");
		}else{
			printf("password false!");
		}
	}else{
		printf("user false!");
	}
	//µÈÓÚÐ´==£¡£¡£¡£¡£¡£¡£¡ 
	return 0;	
}
