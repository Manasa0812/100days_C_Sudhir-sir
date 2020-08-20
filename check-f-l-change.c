#include<stdio.h>
int update_large(int n){
	int r,c=1,num,f,l;
	num=n;
	while(n){
		c=c*10;
		r=n%10;
		if(c==10){
			l=r;
		}
		n=n/10;
	}
	f=r;
	c=c/10;
	if(l>f){
		num=num%c;
		num=l*c+num;
	}
	else if(f>l){
		num=num/10;
		num=num*10+f;
	}
	return num;
}
int main(){
	int n;
	scanf("%d",&n);
	n=update_large(n);
	printf("%d",n);
	return 0;
}
