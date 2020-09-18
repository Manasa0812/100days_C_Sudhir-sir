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
	int num=0;
	num=n;
	while(1){
		printf("%d ",n);
		n=factor_sum(n);
		if(n==1){
			printf("%d ",n);
			break;
		}else if(n==num){
			break;
		}	
	}
}
int main(){
	int n;
	scanf("%d",&n);
	series(n);
}
