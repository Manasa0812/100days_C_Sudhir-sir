#include<stdio.h>
int count_one_binary(int n){
	int count=0;
	while(n){
		n=n&n-1;
		count++;
	}
	return count;
}
int main(){
	int n;
	scanf("%d",&n);
	n=count_one_binary(n);
	printf("%d",n);
	return 0;
}
