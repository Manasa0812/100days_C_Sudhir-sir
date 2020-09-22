#include<stdio.h>
void pattern(int n){
	int i,j;
	for(i=n;i>=1;i--){
		for(j=1;j<=n;j++){	
		    if(j>=i){
		    		printf("*");
			}else{
				printf(" ");
			}			
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

