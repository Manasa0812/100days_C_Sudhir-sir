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
int pos_prime(int n,int p){
	int k,count=0;
	while(count!=p){
		n=n+1;
		k=isPrime(n);
		if(k==1){
			count++;
		}
	}
	return n;
}
int main(){
	int n,p;
	scanf("%d%d",&n,&p);
	n=pos_prime(n,p);
	printf("%d",n);
	return 0;
}
