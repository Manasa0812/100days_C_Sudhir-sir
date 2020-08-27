#include<stdio.h>
int is_prime(int num){
	int i;
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n,prime,i,p,num,a,b,res,count=0,k=0;
	scanf("%d",&num);
	n=is_prime(num);
    if(n==1){
    prime=num;
    for(i=num-1;i>=2;i--){
    	p=is_prime(i);
    	if(p==1){
    		b=i;
    		count++;
    		if(count>1){
    			if(a+b+1==prime){
    	            k=1;
    	           break;
				}
				else{
					a=b;
					i=b-1;
				}
			}
		}
	}
}else{
	printf("not prime");
}
if(k==1){
	printf("Super prime\n");
}else{
	printf("not super prime");
}
return 0;
}7

