#include<stdio.h>
void pattern(int n){
	int i,j,k=0,num=0;
	num=n;
	for(i=1;i<=n;i++){
		for(j=n;j>=1;j--){	
		k++;	
		  if(k<=j){
		  	printf("%d",j);
		  }
			else{
				printf("%d",num--);
			}
		}
		printf("\n");
		k=0;
		num=n;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	pattern(n);
	return 0;
}

