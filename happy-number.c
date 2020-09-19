#include<stdio.h>
int is_happy(int n){
	int s=0,r=0,n1=0;
	n1=n;
	while(n1!=1){
		r=n%10;
		n=n/10;
		s=s+(r*r);
		if(n==0){
			n=s;
			s=0;
			n1=s;
		}
		if(n1==1){
			return n1;
			break;
		}
}
//printf("f: %d",f);
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
	return 0;
}
