#include<stdio.h>
#include<math.h>
int is_sunny(int n){
	int num=0;
	n=n+1;
	num=sqrt(n);
	return num*num==n;
}
int main(){
	int n;
	scanf("%d",&n);
	n=is_sunny(n);
	if(n==1){
		printf("sunny number");
	}else{
		printf("not sunny number");
	}
}
