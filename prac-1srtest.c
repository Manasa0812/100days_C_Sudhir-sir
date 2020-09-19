#include<stdio.h>
int Count(int n,int count){
	int r=0;
	if(n==0){
		return count;
	}else{
		r=n%10;
		n=n/10;
		return Count(n,count++);
	}
}
int digitalRoot(int n,int sum,int count){
	   int r=0;
	  if(Count(n,count)==1){
	  	return n;
	  }else{
	  	r=n%10;
	  	sum=sum+r;
	  	n=n/10;
	  	if(n==0 && Count(sum,count)==1){
	  		return sum;
		  }
		  else if(n==0 && Count(sum,count)!=1){
		  	return digitalRoot(sum,0,count);
		  }
		  return digitalRoot(n,sum,count);
	  }
}
int main(){
	int n,sum=0,count=0;
	scanf("%d",&n);
	n=digitalRoot(n,sum,count);
	printf("%d",n);
	return 0;
}
