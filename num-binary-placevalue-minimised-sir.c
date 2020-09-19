#include<stdio.h>
int bin_position(int n,int k)
{
    n=n>>k-1;
    return n&k;
    
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	n=bin_position(n,k);
	if(n==1){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}
