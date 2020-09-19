#include<stdio.h>
int count(int n){
	int count=0,r=0;
	while(n){
		r=n%10;
		count++;
		n=n/10;
	}
	return count;
}
int digitalRoot(int n){
	int r=0,num=0,sum=0;
	num=n;
	if(count(n)==1){
		return num;
	}else{
		while(n){
			r=n%10;
			sum=sum+r;
			n=n/10;
			if(n==0 && count(sum)==1){
				return sum;
			}else if(n==0 && count(sum)!=1){
				return digitalRoot(sum);
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	n=digitalRoot(n);
	printf("%d",n);
}
