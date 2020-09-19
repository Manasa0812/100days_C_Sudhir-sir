#include<stdio.h>
void seq(n,a,b,c){
	if(n<=0){
		return;
	}
	if(a==1 && b==1 && c==1){
		if(n==1){
			printf("%d ",a);
		}
		else if(n==2){
			printf("%d %d ",a,b);
		}else{
			printf("%d %d %d ",a,b,c);
		}
		return seq(n-3,b,c,a+b);
	}
	printf("%d ",a+b);
	return seq(n-1,b,c,a+b);
}
int main(){
	int n,a=1,b=1,c=1;
	scanf("%d",&n);
	seq(n,a,b,c);
}
