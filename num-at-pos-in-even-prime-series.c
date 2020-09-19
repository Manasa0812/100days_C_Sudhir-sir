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
int evenPrime(int n,int e,int p){
	static int i=0,j=1;
	if(n%2!=0){	
		if(j==n/2+1){
			return e;
		}
		j++;
		return evenPrime(n,e+2,p);
	}else{
		p=prime_series(i);
		if(i==n/2){
			return p;
		}
		i++;
		return evenPrime(n,e,p);
	}
}
int main(){
	int n,e=2,p=0;
	scanf("%d",&n);
	printf("%d ",evenPrime(n,e,p));
	return 0;
}
