#include<stdio.h>
int long_consecutive(int n){
	int c=0;
	while(n){
		n=n&(n/2);
		c++;
	}
	return c;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",long_consecutive(n));
	return 0;
}
