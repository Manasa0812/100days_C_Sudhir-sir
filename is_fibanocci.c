#include<stdio.h>
int is_fibanocci(int n){
	int a=0,b=1,c=0;
	if(n==0 || n==1){
		return 1;
	}
	while(n){
		c=a+b;
		a=b;
		b=c;
		if(c==n){
			return 1;
		}else if(c>n){
			return 0;
		}
	}
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	if(is_fibanocci(n)){
		printf("fibonacci");
	}else{
		printf("not");
	}
	return 0;
}
