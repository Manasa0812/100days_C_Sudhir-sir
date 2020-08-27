#include<stdio.h>
int mega_prime(int n){
	int i,c=0;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			c++;
			break;
		}
	}

	return c;
}
int main()
{
	int n,num,r,f=0,c=0;
	scanf("%d",&n);
	num=mega_prime(n);
	if(num==0){
		printf("prime");
	while(n){
	r=n%10;
	num=mega_prime(r); 
	if(num!=0){
		printf("\nNot Mega prime");
	}
	else{
     f++;
	}
	c++; 
	n=n/10;  	
		}
			if(f==c){
			printf("\nMega prime");
		}
	}
	else{
		printf("not prime");
	}
}
