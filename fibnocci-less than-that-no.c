#include<stdio.h>
void fib(int a,int b,int n){
		if(n<a+b){
		return;
	}
	if(a==0){
	  printf("%d %d %d ",a,b,a+b);
	  return fib(b,a+b,n);
	}else{
		printf(" %d ",a+b);
   	return fib(b,a+b,n);
	}
	
}
int main(){
	int n,a=0,b=1;
	scanf("%d",&n);
	fib(a,b,n);
	return 0;
}
