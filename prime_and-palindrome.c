#include<stdio.h>
#include<math.h>
int find_prime(n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 1;
			break;
		}
	}
	return 1;
}
int find_palindrome(int num){
	int rev=0,r,num1;
	num1=num;
	while(num){
		r=num%10;
		rev=rev*10+r;
		num=num/10;
	}
	if(num1==rev){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int n,num;
	scanf("%d",&n);
	num=n;
	n=find_prime(n);
	if(n==1){
		n=find_palindrome(num);
		if(n==1){
			printf("prime and palindrome");
		}else{
			printf("prime not palindrome");
		}
	}else{
		printf("not prime");
	}
	return 0;
}
