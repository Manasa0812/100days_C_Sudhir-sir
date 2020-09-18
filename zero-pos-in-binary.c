#include<stdio.h>
int setbit_pos(int n){
	int pos=1;
	if(n==0){
		printf("no setbits");
	}
	while(n>0){
		if((n&1)==0){
			return pos;
		}
		n=n>>1;
		pos++;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	n=setbit_pos(n);
	printf("%d",n);
	return 0;
}
