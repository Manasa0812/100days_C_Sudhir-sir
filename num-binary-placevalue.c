#include<stdio.h>
int bin_dec(int n,int k){
	int bin=0,r=0,temp=1;
	while(n){
		r=n%2;
		bin=bin+r*temp;
		temp=temp*10;
		n=n/2;
	}
//	printf("%d \n",bin);
	while(k){
		r=bin%10;
		k--;
		bin=bin/10;
	}
//	printf("%d\n",r);
	return r%2==0;
}
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	n=bin_dec(n,k);
	if(n==1){
		printf("no");
	}else{
		printf("yes");
	}
}
