#include<stdio.h>
void order_type(int n){
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
			printf("MIXED");
			f=2;
			break;
		}
		r=n%10;
		n=n/10;
	}
	if(f==1){
		printf("Ascending");
	}
	else if(f==0){
		printf("descending");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	order_type(n);
	return 0;
}
