#include<stdio.h>
int xor_val(int *arr,int n){
	int i=0,x=0;
	for(i=0;i<n;i++){
	x=x^arr[i];	
	}
	return x;
}
int main(){
	int n,i=0,arr[100],start;
	scanf("%d%d",&n,&start);
	for(i=0;i<n;i++){
			arr[i]=start;
		start+=2;
	}
	n=xor_val(arr,n);
	printf("%d",n);
	return 0;
}
