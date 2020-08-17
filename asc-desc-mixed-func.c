#include<stdio.h>
void find_order(int n){
	int max=0,count=0,asc=0,num,r,des=0;
	num=n;
	max=num%10;
	while(n){
		r=n%10;
		if(r==max){
			max=r;
			asc++;
			des++;
		}
		if(r<max){
			max=r;
			asc++;
		}
		else if(r>max){
			max=r;
			des++;
		}
		n=n/10;
		count++;
	}
	if(count==asc){
		printf("Acsending");
	}
	else if(count==des){
		printf("Descending");
	}
	else{
		printf("Mixed");
	}
}
int main(){
	int n;           //1234
	scanf("%d",&n);
	find_order(n);
}
