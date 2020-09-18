#include<stdio.h>
int Binary(int n){
	int r;
	while(n){
		r=n%10;
		if(r==1 || r==0){
			
		}
		else{
			return 0;
			break;
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
