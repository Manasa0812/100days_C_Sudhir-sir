#include<stdio.h>
#include<math.h>
int is_abundant(int n){
	int i=0,sum=0;
	for(i=2;i<n/2;i++){
		if(n%i==0){
			if(i==(n/i)){
				sum=sum+i;
			}else{
				sum=sum+i+(n/i);
			}
		}
	}
	return sum+1>n;
}
int main(){
	int n;
	scanf("%d",&n);
	if(is_abundant(n)){
		printf("Abundant Number");
	}else{
		printf("Not Abundant Number");
	}
}
