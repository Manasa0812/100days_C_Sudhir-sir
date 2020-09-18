#include<stdio.h>
void series(int n){
	while(1){
		printf("%d ",n);
		if(n==1){
			break;
		}
		if(n%2==0){
			n=n/2;
		}else if(n%2!=0){
			n=(3*n)+1;
		}		
	}
}
int main(){
	int n;
	scanf("%d",&n);
	series(n);
	return 0;
}
