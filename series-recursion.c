#include<stdio.h>
void series(int n){
	printf(" %d ",n);
	if(n==1){
		return;
	}
	if(n%2==0){
		return series(n/2);
	}else{
		return series((n*3)+1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	series(n);
	return 0;
}
