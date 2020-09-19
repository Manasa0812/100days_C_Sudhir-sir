#include<stdio.h>
#include<math.h>
int isPrime(int n,int i){
	int num;
	num=sqrt(n);
	if(i==num && n%i==0){
		return 1;
	}else if(i==num && n%i!=0){
		return 0;	
	}
	if(n%i==0){
		return 1;
	}
	else if(n%i!=0) {
		return isPrime(n,i+1);
	}
}
int main(){
	int n,i=2;
	scanf("%d",&n);
	n=isPrime(n,i);
	if(n==1){
		printf("not prime");
	}else{
		printf("prime");
	}
	return 0;
}
