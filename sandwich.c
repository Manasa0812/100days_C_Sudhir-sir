#include<stdio.h>
#include<math.h>
int find_prime(int n){
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
	int n,f=0,num;
	scanf("%d",&n);
	num=n;
	n=n-1;
	n=find_prime(n);
	if(n!=1){
		f=1;
	}else{
		n=num+1;
		n=find_prime(n);
		if(n!=1){
			f=1;
		}
	}
	if(f==0){
		printf("Sandwich prime");
	}else{
		printf("not sandwich prime");
	}
	return 0;
}
