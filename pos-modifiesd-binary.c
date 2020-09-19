#include<stdio.h>
int diff_pos_at(int n,int m){
	int pos=0;
	if(n==m){
		return 0;
	}
	while(n>0 || m>0){
		if(n&1==1 && m&1==1 || (n&1)==0 && (m&1)==0 ){
			n=n>>1;
			m=m>>1;
			pos++;
		}else{
			pos++;s
			return pos;
		}
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	n=diff_pos_at(n,m);
	printf("%d",n);
	return 0;
}
