#include<stdio.h>
void pattern(int n){
	int i,j,k=1,sp=0;
	for(i=1;i<=n;i++){
		for(sp=n-1;sp>=i;sp--){
			printf(" ");
		}
		for(j=1;j<=k;j++){	
		  printf("%d",i);
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

