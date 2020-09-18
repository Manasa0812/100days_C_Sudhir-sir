#include<stdio.h>
int is_bouncy(int n){
	int r=0,count=0,p=0,inc=0,dec=0;
	if(n<=100){
		return 1;
	}
	while(n){
		r=n%10;
		if(count>0){
			if(p==r){
				inc++;
				dec++;
			}
			if(p>r){
				inc++;
			}
			else if(p<r){
				dec++;
			}
		}
		p=r;
		n=n/10;
		count++;
	}
	return count==inc+1 || count==dec+1 ;
}
int main()
{
	int n;
	scanf("%d",&n);
	n=is_bouncy(n);
	if(n==1){
		printf("not bouncy number");
	}else{
		printf("bouncy number");
	}
	return 0;
}
