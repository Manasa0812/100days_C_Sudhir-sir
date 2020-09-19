#include<stdio.h>
void form_num(int n){
		int r,eve=0,odd=0;
	while(n){
		r=n%10;
		if(r%2==0){
			eve=eve*10+r;
		}else{
			odd=odd*10+r;
		}
		n=n/10;
	}
	printf("%d  %d",eve,odd);
}
int main(){
	int n;
	scanf("%d",&n);
	form_num(n);
}
