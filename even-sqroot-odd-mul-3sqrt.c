#include<stdio.h>
#include<math.h>
void series(int n){
	printf("%d ",n);
	if(n==1){
		return;
	}
	if(n%2==0){
		n=sqrt(n);
		return series(n);
	}else{
		n=sqrt(n)*sqrt(n)*sqrt(n);
		return series(n);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	series(n);
}
