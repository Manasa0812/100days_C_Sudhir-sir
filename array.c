#include<stdio.h>
int main(){
	int n,arr[100],i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	for(i=0;i<n;i++){
		printf("%d ",*(arr+i));
	}
	return 0;
}
