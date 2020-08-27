#include<stdio.h>
#include<math.h>
int find_prime(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
			break;
		}
	}
	return 1;
}
int main(){
	int n,f;
	scanf("%d",&n);
    while(n){
    	n=n/10;
    	f=find_prime(n);
    	if(f!=1){
    		printf("not right truncation prime");
    		break;
		}
	}
	if(f==1){
		printf("right truncated prime");
	}
	return 0;
}
