#include<stdio.h>
#include<math.h>
int is_duck(int n){
	int r=0,count=0;
	while(n){
		r=n%10;
		if(r==0 && count==0){
			return 0;
			break;
		}
		if(r==0){
			return 1;
			break;
		}
		n=n/10;
		count++;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	n=is_duck(n);
	if(n==1){
		printf("duck number");
	}else{
		printf("not duck number");
	}
}
