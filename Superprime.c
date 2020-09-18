#include<stdio.h>
#include<math.h>
int prime(int n){
	int i;
		for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
		return 0;
		break;	
		}
	}
	return 1;
}
int super_prime(int n){
	int i,k,count=0;
	for(i=2;i<=n;i++){
		k=prime(i);
		if(k==1){
			count++;
		}
	}
	count=prime(count);
  return count;
}
int main(){
	int n,num;
	scanf("%d",&n);
	num=n;
	n=prime(n);
	if(n==1){
	num=super_prime(num);
	if(num==1){
		printf("Super prime");
	}else{
		printf("prime not super prime");
	}	
	}else{
		printf("not prime");
	}
}
