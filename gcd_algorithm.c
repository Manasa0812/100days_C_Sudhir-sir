//gcd program without returning and using pointers 
#include<stdio.h>
void find_gcd(int *a,int b){
	int temp;
	while(b){
		if(*a>b){
		temp=*a;
		*a=b;
		b=*a;
	}
	b=b%*a;
	}
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	find_gcd(&a,b);
	printf("%d",a);
	return 0;
}
