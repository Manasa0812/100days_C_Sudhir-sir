#include<stdio.h>
void pattern(int n){
	int i,j;
	printf("*\n");
	for(i=1;i<n;i++){
		for(j=0;j<(2*i)+1;j++){	
		  printf("*");
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	pattern(n);
	return 0;
}

