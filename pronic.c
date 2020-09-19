#include<stdio.h>
#include<math.h>
int is_pronic(int n){
	int i=0,prev=0,nxt=0;
	if(n==0)
	return 1;
	for(i=1;i<=sqrt(n);i++){
		if(n%i==0){
			prev=i;
			nxt=n/i;
			if(prev+1==nxt){
				return 1;
				break;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	n=is_pronic(n);
	if(n==1){
		printf("pronic number");
	}else{
		printf("not pronic");
	}
	return 0;
}
