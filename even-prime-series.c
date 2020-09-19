#include<stdio.h>
#include<math.h>
int prime_series(int i){
	int num=1,pcount=0,count=0,j=0;
	while(pcount!=i){
			num=num+1;
			count=0;
		for(j=2;j<=sqrt(num);j++){
		  if(num%j==0){
		  	count++;
		  	break;
		  }	
		}
		if(count==0){
			pcount++;
		}
	}
		return num;
}
void series(int n){
	int i=0,e=0,p;
	for(i=1;i<=n/2;i++){
		e=e+2;
		printf(" %d ",e);
		printf(" %d ",prime_series(i));
	}
	if(n%2!=0){
		printf(" %d ",e+2);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	series(n);
	return 0;
}
