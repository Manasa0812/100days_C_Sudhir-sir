#include<stdio.h>
int is_zuck(int n){
	int r=0,m=1,num;
	num=n;
	while(n){
		r=n%10;
		m=m*r;
		n=n/10;
	}
	return num%m;
}
int main(){
	int n;
	scanf("%d",&n);
	n=is_zuck(n);
	if(n==0){
		printf("zuckerman number");
	}else{
		printf("not zuckerman");
	}
}
