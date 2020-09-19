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
void semiprime(int n){
	int i=2,m1=0,m2=0,count=1;
	while(i!=n){
		if(n%i==0 && isPrime(i)==1){
			m1=i;
		}
		if(n==m1*m2 || n==m1*m2 || n==m2*m2){
			printf("semi prime");
			break;
		}else{
			m2=m1;
			i++;
		}
	}
}
int main(){
	int n,num;
	scanf("%d",&n);
	num=isPrime(n);
	if(num==0){
		semiprime(n);
	}else{
		printf("prime");
	}
	return 0;
}
