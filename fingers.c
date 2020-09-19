#include<stdio.h>
void finger(int n){
	int sum,c=1,i;
	if(n<=5){
	for(i=1;i<=n;i++){
		if(i==n){
			printf("%d finger ,from thumb direction",i);
		}
	}
}
	while(n!=sum){
		if(c==1){
			sum=5;
		}
		c++;
		sum=sum+1;
		if(n==sum && c%2==0){
			printf("4th finger, in thumb direction");
			break;
		}
		else if(n==sum && c%2==1){
			printf("2nd finger ,in thumb direction");
			break;
		}
		sum=sum+1;
		if(n==sum && c%2==0){
			printf("3rd finger, in thumb direction");
			break;
		}
		else if(n==sum && c%2==1){
			printf("3rd finger ,in thumb direction");
			break;
		}
		sum=sum+1;
		if(n==sum && c%2==0){
			printf("2nd finger, in thumb direction");
			break;
		}
		else if(n==sum && c%2==1){
			printf("4th finger ,in thumb direction");
			break;
		}
		sum=sum+1;
		if(n==sum && c%2==0){
			printf("thumb finger %d rotation",c);
			break;
		}
		else if(n==sum && c%2==1){
			printf("5th finger from thum or little finger in %d rotation",c);
			break;
		}
	}
}
int main()
{
   int n;
   scanf("%d",&n);
   finger(n);
   return 0;
}
