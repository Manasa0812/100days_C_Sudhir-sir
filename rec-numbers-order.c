#include<stdio.h>
void order(int n){
	int num;
	num=n;
	if(n==0 && n<=num){
		printf("n: %d",n);
		return order(n+1);
	}else if(n>=num && n!=0){
		printf("%d ",n);
		return order(n-1);
	}
	if(n>num){
		return;
	}
	}
int main(){
	int n;
	scanf("%d",&n);
	order(n);
}
