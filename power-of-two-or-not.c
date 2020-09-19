#include<stdio.h>
int is_power_of_two(int n){
		n=n & n-1;
		return n==0;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(is_power_of_two(n)){
		printf("yes");
	}else{
		printf("no");
	}
}
