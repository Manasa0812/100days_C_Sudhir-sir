#include<stdio.h>
#include<math.h>
int is_fib(int n,int a,int b,int *i){
int c;
   	 while(c<=n){
	 	c=a+b;
	  	a=b;
	  	b=c;
	  	if(c==n){
	  		return 1;
		  }
	  	*i=*i+1;  	
	 }
}
void fib(int a,int b,int num,int i){
	  int f=0,c=0,c1=0,c2=0;
	 while(c<num){
	 	c=a+b;
	  	a=b;
	  	b=c;
	  	if(f==(i-1)){
	  		c1=c;
		  }
		  if(f==i-2){
		  	c2=c;
		  }
		  f++;
	 }
	 	printf("%d %d\n",c1,c2);
}
int not_fib(int a,int b,int num){
	  int c=0;
	 while(b<num){
	 	c=a+b;
	  	a=b;
	  	b=c;
	 }
	return a;
}
int main(){
	int n,a=0,b=1,num=0,i=0,n1=0,s=0,pf=0,p=0,d=0;
	scanf("%d",&n);
	num=n;
	n=is_fib(n,a,b,&i);
	if(n==1){
		fib(a,b,num,i);
	}
	else{
	  n1=num;  	  
 	  while(s!=num){
  	  	if(is_fib(n1,a,b,&i)!=1){
  	  		pf=not_fib(a,b,n1);
			}else{
				pf=n1;
			}
				d=num-(pf+p);
				s=s+pf;
			n1=d;
			p=pf+p;
				printf(" %d\n",pf);
		}
	}
	return 0;
}
