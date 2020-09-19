#include<stdio.h>
int order_type(int n){
	int f,r;
	r=n%10;
	if(n%10>n%100/10){
		f=1;//ascending
	}
	else{
		f=0;//descending
	}
	while(n){
		if((f==1 && r<n%10) || (f==0 && r>n%10)){
		   f=2;
//		   return f; or leave like that or use break
           break;
		}
		r=n%10;
		n=n/10;
	}
return f;
}
int main(){
	int n,v;
	scanf("%d",&n);
	v=order_type(n);
	if(v==1){
		printf("Ascending");
	}else if(v==0){
		printf("Descending");
	}
	else{
		printf("Mixed");
	}
	return 0;
}
