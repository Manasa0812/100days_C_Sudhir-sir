#include<stdio.h>
void pattern(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d",i);
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

