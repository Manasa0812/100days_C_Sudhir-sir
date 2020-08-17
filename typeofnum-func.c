#include<stdio.h>
void find_type(int n){
	int r,eve=0,odd=0,count=0;
	while(n){
		r=n%10;
		if(r%2==0){
			eve++;
		}
		else{
			odd++;
		}
		n=n/10;
		count++;
	}
	if(count==eve){
		printf("EVEN\n");
	}
	else if(count==odd){
		printf("ODD\n");
	}else{
		printf("Mixed\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	find_type(n);
}
