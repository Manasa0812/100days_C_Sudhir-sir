#include<stdio.h>
int diff_pos(int n,int m){
	int pos=1;
	if(n==m)
	return 0;	
	n=n^m;
	while(n>0){
		if(n&1==1)
		return pos;
	n=n>>1;	
	pos++;	
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	n=diff_pos(n,m);
	printf("%d",n);
	return 0;
}
