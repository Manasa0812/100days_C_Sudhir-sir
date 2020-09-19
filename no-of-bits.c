#include<stdio.h>
int no_of_bits(int n){
	int count=0;
	while(n){
		n=n>>1;
		count++;
	}
	return count;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",no_of_bits(n));
	return 0;
}
