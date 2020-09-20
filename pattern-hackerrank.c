#include<stdio.h>
int MAX(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int main(){                    
	int n,i=1,j=1,num=0;
	scanf("%d",&n);
	num=(n*2)-1;
	for(i=-n+1;i<n;i++){
		for(j=-n+1;j<n;j++){	
		printf("%d ",MAX(abs(i)+1,abs(j)+1));
	}
	printf("\n");
}
}
