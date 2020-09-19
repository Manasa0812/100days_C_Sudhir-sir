#include<stdio.h>
#include<math.h>
int change_num(int n){
	int r,num=0,full=0,s,rem,flag=0,p;
	r=n%10;
	num=num*10+r;
		n=n/10;
	full=n;
     while(n){
     	rem=n%10;
     	n=n/10;
     	flag++;
	 }
	 s=flag-1;
	 p=pow(10,s);
		full=full%p;
	 num=num*p+full;
	 num=num*10+rem;
	return num;
}

int main(){
	int n,rev;
	scanf("%d",&n);
	rev=change_num(n);
	printf("%d",rev);
}
