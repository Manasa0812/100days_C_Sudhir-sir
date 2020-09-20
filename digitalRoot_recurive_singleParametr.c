#include<stdio.h>
int sum=0,r=0,count=0;
int Counting(int n){
	if(n==0){
		return count;
	}
	r=n%10;
	count++;
	n=n/10;
	return Counting(n);
}
int digitalRoot(int n){
	if(n==0){
		return sum;
	}
	r=n%10;
	sum=sum+r;
	n=n/10;
	if(n==0 && Counting(sum)==1){
		return sum;
	}else if(n==0 && Counting(sum)!=1){
		count=0;
		r=sum;
		sum=0;
		return digitalRoot(r);
	}
	return digitalRoot(n);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",digitalRoot(n));
//	printf("%d",Counting(n));
	return 0;
}
