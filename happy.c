#include<stdio.h>
int is_happy(int n){
	int r,s=0;
	while(n!=0){
	r=n%10;
	n=n/10;
	s=s+(r*r);
	if(n==0 && s==1){
		return 1;
		break;
	}
	if(n==0){
		n=s;
		s=0;
	}
}
}
int main(){
	int n;
	scanf("%d",&n);
	n=is_happy(n);
	if(n==1){
		printf("happy number");
	}
}
