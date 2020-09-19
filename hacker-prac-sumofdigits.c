#include<stdio.h>
int main(){
	int n,rem,sum,count=0;
	scanf("%d",&n);
	
	//complete code
	while(n!=0){
		rem=n%10;
		sum=sum+rem;
		n=n/10;
		count++;
	}
	if(count==5){
			printf("%d\n",sum);
	}
	else{
		
	}

	
	return 0;
}
