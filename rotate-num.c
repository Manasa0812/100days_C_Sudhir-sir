#include<stdio.h>
int join_num(int rem,int n,int count){
	return rem*count+n;
}
int num_rotate(int n,int r){
	int count=1,rem,num,join,c=0;
	num=n;
	while(num){
		rem=num%10;
		
		num=num/10;
		count=count*10;
	}
	count=count/10;
  while(c!=r){
  	c++;
  	rem=n%10;
  	n=n/10;
  	join=join_num(rem,n,count);
  	n=join;
  }
   return join;
}
int main(){
	int n,r;
	scanf("%d%d",&n,&r);
	n=num_rotate(n,r);
	printf("%d",n);
	return 0;
}
