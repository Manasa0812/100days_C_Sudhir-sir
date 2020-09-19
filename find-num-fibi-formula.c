#include<stdio.h>
#include<math.h>
int is_fib(int n){
	int v,v1,v2,n1,n2;
	v=(n*n)*5;
   v1=v-4;
   n1=sqrt(v1);
   v2=v-4;
   n2=sqrt(v2);
   if((n1*n1)==v1 || (n2*n2)==v2){
  return 1;
   } 
}
int main(){
	int n;
	scanf("%d",&n);
	n=is_fib(n);
    if(n==1){
    	 	printf("fibanocci");
	}  else{
		printf("not fibanocci");
	}  
}
