#include<stdio.h>
#include<math.h>
int isPrime(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
		return 0;
		break;	
		}
	}
	return 1;
}
int main(){
	int n1,n2,n;
	scanf("%d%d",&n1,&n2);
	n=isPrime(n1);
	if(n==1){
		n=isPrime(n2);
		if(n1>n2){
		n1=n1+n2;
		n2=n1-n2;
		n1=n1-n2;
	}
		if(n==1 && n2-n1==2){
			printf("twin primes");
		}else{
			printf("not twin primes");
		}
	}else{
		printf("not primes");
	}
	return 0;
}
