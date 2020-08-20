#include<stdio.h>
int russian_peacentMul(int l,int s){
	int mul=0;
	while(s!=1){
		s=s/2;
		l=2*l;
		if(s%2==1){
			mul=mul+l;
		}
	}
	return mul;
}
int main(){
	int l,s,n;
	scanf("%d %d",&l,&s);
	if(s>l){
		n=s;
		s=l;
		l=n;
	}
	n=russian_peacentMul(l,s);
	printf("%d\n",n);
	return 0;
}
