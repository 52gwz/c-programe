#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char* array;
	int size;
}Array;
Array array_create(int init_size);
char* array_at(Array* a,int index);
//void array_free(Array* a);

int main(){
	Array a;
	a = array_create(100);
	*array_at(&a,0)='s';
	printf("%c",*array_at(&a,0));
	return 0;
} 

Array array_create(int init_size){
	Array a;
	a.size=init_size;
	a.array=(char*)malloc(sizeof(char)*a.size);
	return a;
}

char* array_at(Array* a,int index){
	return &(a->array[index]);
}
