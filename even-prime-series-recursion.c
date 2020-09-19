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
void series(int n,int e,int i){
	static int num=0;
	num=n;
	if(num%2==0){
		if(n==0){
		return;
	}
			printf(" %d ",e);
			printf(" %d ",prime_series(i));
		return series(n-2,e+2,i+1);
	}else{
		printf(" %d ",e);
		n--;
		if(n==0){
			return;
		}
		printf(" %d ",prime_series(i));
		return series(n-1,e+2,i+1);
	}
}
int main(){
	int n,e=2,i=1;
	scanf("%d",&n);
	series(n,e,i);
}
