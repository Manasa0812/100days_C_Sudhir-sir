#include<stdio.h>
int Count(int n,int r,int count){
	if(n==0){
		return count;
	}
	r=n%10;
	n=n/10;
	count++;
	return Count(n,0,count);
}
int digitalRoot(int n,int sum,int r,int count){
	if(n==0 &&Count(n,0,0)==1 ){
		return n;
}else{
		r=n%10;
		sum=sum+r;
		n=n/10;
		if(n==0 && Count(sum,0,0)==1){
			return sum;
		}else if(n==0 && Count(sum,0,0)!=1){
			return digitalRoot(sum,0,0,0);
		}
		return digitalRoot(n,sum,r,0);
	}
}
int main(){
	int n,sum=0,r=0,count=0;
	scanf("%d",&n);
	n=digitalRoot(n,sum,r,count=0);
	printf("%d",n);
//	printf("%d",Count(n,0,0));
}
