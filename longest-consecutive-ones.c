#include<stdio.h>
int long_consecutive(int n){
	int count=0,max=0;
	while(n){
		if(n&1==1){
			n=n>>1;
			count++;
			if(max<count){
				max=count;
			}
		}else{
			count=0;
			n=n>>1;
		}
	}
	return max;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",long_consecutive(n));
	return 0;
}
