#include<stdio.h>
void pattern(int n){
	int i,j,k=0;
	for(i=1;i<=n;i++){
		for(j=n;j>=1;j--){	
		k++;	
			if(k<=j){
			printf("%d",j);	
			}else if(k>j){
			printf("%d",k);	
			}	
		}
		printf("\n");
		k=0;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	pattern(n);
	return 0;
}

