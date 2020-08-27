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
	int n,num,count=1,r,i,p;
	scanf("%d",&n);
	n=find_prime(n);
	if(n==1){
	num=n;
	while(num){
		r=num%10;
		num=num/10;
		count++;
	}
	for(i=count;i>=1;i--){
		p=pow(10,count);
		n=n%p;
		r=find_prime(n);
		if(r!=1){
			printf("not left truncated prime");
		}
 }
 if(r==1){
 	printf("left truncated prime");
 }
}
else{
	printf("not prime");
}
	return 0;
}
