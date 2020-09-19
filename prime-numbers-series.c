#include<stdio.h>
#include<math.h>
void prime_series(int n){
	int num=1,i=0,pcount=0,count=0;
	while(pcount!=n){
		    count=0;
			num=num+1;
		for(i=2;i<=sqrt(num);i++){
		  if(num%i==0){
		  	count++;
		  	break;
		  }	
		}
		if(count==0){
			printf("%d ",num);
			pcount++;
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	prime_series(n);
}
