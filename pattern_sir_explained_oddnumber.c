#include<stdio.h>
void pattern(int n){
	int i,j,k=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=k;j++){	
		  printf("*");
		}
		k=k+2;
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	pattern(n);
	return 0;
}

