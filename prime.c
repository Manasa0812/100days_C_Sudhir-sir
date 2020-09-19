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
	int n;
	scanf("%d",&n);
//	n=isPrime(n);
//	if(n){
//	printf("Prime");	
//	}else{
//		printf("not prime");
//	}

//or
	if(isPrime(n))//this is also a function call with return type
	{
	printf("Prime");	
	}else{
		printf("not prime");
	}
	return 0;
}
