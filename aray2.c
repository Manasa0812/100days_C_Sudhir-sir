#include<stdio.h>
void func(int *arr,int n){
	int i=0;
	for(i=0;i<n;i++){
		printf("%d ",*(arr+i));
	}
}
int main(){
	int n,arr[100],i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	func(arr,n);
	return 0;
}
