#include<stdio.h>
int fib(int a,int b,int range){
   if(range<=0){
   	return b;
   }
   if(a==0){
   	if(range==1){
   	printf(" %d ",a);
   }if(range==2){
   	printf("%d %d ",a,b);
   }
   	return fib(b,a+b,range-3);
   }
   else if(range>2 && a!=0) {
   	return fib(b,a+b,range-1);
   }
}
int main(){
	int a=0,b=1,range,i=1;
	scanf("%d",&range);
	printf("%d",fib(a,b,range));
	return 0;
}
