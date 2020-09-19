#include<stdio.h>
int count(int n){
	n=n/10;
	if(n==0){
		return 1;
	}else{
		return 0;
	}
}
int is_happy(int n){
	int r,s=0,c=0;
	while(n!=0){
	r=n%10;
	n=n/10;
	s=s+(r*r);
	if(n==0 && s==1 || n==0 && s==7){
		return 1;
	}
	if(n==0){
		n=s;
		c=count(s);
		s=0;
	}
	if(c==1 && s!=1 || c==1 && s!=1){
		return 0;
	}
}
}
int main(){
	int n;
	scanf("%d",&n);
	n=is_happy(n);
	if(n==1){
		printf("happy number");
	}else{
		printf("not happy");
	}
}
