#include<stdio.h>
int find_prime(int n){
	int i,c=1;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			c=0;
			break;
		}
	}
	return c;
}
int main()
{
	int i,n,c=0,num,prime=0,k=0,prime1=0,f=0;
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		c++;
		num=find_prime(i);	
		if(num==1){
			prime=i;
			break;
		}	
	}
   	while(k!=1){
   		n=n+1;
   		num=find_prime(n);
   		if(num==1){
   			k=1;
   			prime1=n;
   			break;
		   }
		   f++;
	   }
	   c=c-2;
	   if(f>c){
	   	printf("%d\n",prime);
	   }else if(f<c){
	   	printf("%d",prime1);
	   }
	   if(f==c){
	   	printf("%d %d",prime,prime1);
	   }

}
