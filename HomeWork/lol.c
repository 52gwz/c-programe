#include <stdio.h>

void swap(int x,int y) 
 
{ int temp; 
 
temp=x; 
 
x=y; 
 
y=temp; 
  
printf("\n(swap)：%d,%d\n",x,y); 
 
} 
  

int main() 
 
{ int a,b; 
  
scanf("%d,%d",&a,&b); 
 
if(a<b) swap(a,b); 
  
printf("\n(main)：%d,%d\n",a,b); 
 
} 
