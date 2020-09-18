#include<stdio.h>
int factor_sum(int n){
	int sum=0,i;
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	return sum;
}
void series(int n){
	static int num;
	num=n;
		printf("%d ",n);
	n=factor_sum(n);
	if(n==1){
		printf("%d ",n);
		return;
	}
	else if(n==num){
		return;
	}else{
		return series(n);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	series(n);
}
