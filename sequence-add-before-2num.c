#include<stdio.h>
void seq(int n){
	int a=1,b=1,c=1,i=0,d=0;
		if(n==1){
			printf("%d ",a);
		}
		else if(n==2){
			printf("%d %d ",a,b);
		}else{
			printf("%d %d %d ",a,b,c);
		}
	for(i=1;i<=n-3;i++){
		d=a+b;
		printf("%d ",d);
		a=b;
		b=c;
		c=d;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	seq(n);
}
