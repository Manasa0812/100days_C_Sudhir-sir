#include<stdio.h>
#include<math.h>
int is_rare(int n){
	int r,num,rev=0,sq=0;
	num=n;
	while(n){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	r=rev+num;
	sq=sqrt(r);
	return r==(sq*sq);
}
int main(){
	int n;
	scanf("%d",&n);
	if(is_rare(n)){
		printf("rare number");
	}else{
		printf("not rare number");
	}
	return 0;
}
