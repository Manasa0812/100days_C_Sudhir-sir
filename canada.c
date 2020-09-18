//perfect factors sum excluding 1 and that number ex:5-factors-1,5,25                        sum of factors excluding 1 and that number is sum=5------this code takes less time
#include<stdio.h>
#include<math.h>
int is_canada(int n){
	int i=0,sum=0,r=0,add=0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			if(i==(n/i)){
				sum=sum+i;
			}else{
		sum=sum+i+(n/i);
	}
	}
	}
	while(n){
		r=n%10;
		add=add+(r*r);
		n=n/10;
	}
	return add==sum;
}
int main(){
	int n;
	scanf("%d",&n);
	if(is_canada(n)){
		printf("canada number");
	}else{
		printf("not canada number");
	}
	return 0;
}



