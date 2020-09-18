#include<stdio.h>
int Binary(int n){
	int r;
	if(n<0){
		return 0;
	}
	while(n){
		r=n%10;
		if(r>1){
			return 0;
		}
		n=n/10;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	n=Binary(n);
	if(n==1){
		printf("Binary");
	}else if(n==0){
		printf("not binary");
	}
}
