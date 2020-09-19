#include<stdio.h>
int main()
{
	int n,r,count=0,s,num;
	scanf("%d",&n);
	while(n!=0){
		r=n%10;
		n=n/10;
		count++;
	}
	printf("no of digits: %d\n",count);
	s=count-1;
	num=10^(s);
	printf("%d\n",num);
	
	return 0;
}
