#include<stdio.h>
int fib(int a,int b,int range){
   if(range<=0){
   	return;
   }
   if(a==0){
   	printf("%d %d %d ",a,b,a+b);
   	return fib(b,a+b,range-3);
   }
   else{
   	printf(" %d ",a+b);
   	return fib(b,a+b,range-1);
   }
}
int main(){
	int a=0,b=1,range,i=1;
	scanf("%d",&range);
	printf("%d",fib(a,b,range));
	return 0;
}
