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
int countPrime(int n1,int n2){
	int i,n,count=0;
	for(i=n1;i<=n2;i++){
		n=isPrime(i);
		if(n==1){
			count++;
		}
	}
	return count;
}
int reverse(int *n1){
	int r,rev=0;
	while(*n1){
		r=*n1%10;
		rev=rev*10+r;
		*n1=*n1/10;
	}
//	printf("%d\n",rev);
	return rev;
}
int main(){
	int n1,n2,n,count=0;
	scanf("%d%d",&n1,&n2);
	n=countPrime(n1,n2);
	n1=reverse(&n1);
	n2=reverse(&n2);
	if(n1>n2){
		n1=n1+n2;
		n2=n1-n2;
		n1=n1-n2;
	}
	//printf("%d %d\n",n1,n2);
	count=countPrime(n1,n2);
	printf("%d",count+n);
	return 0;
}
