#include<stdio.h>
int is_sparse(int n){
	return (n&(n/2));
}
int main(){
	int n;
	scanf("%d",&n);
	n=is_sparse(n);
	if(n==1){
		printf("not sparse");
	}else{
		printf("sparse");
	}
	return 0;
}
