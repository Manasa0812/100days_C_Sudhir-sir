#include<stdio.h>
void small_big(int *arr,int n){
	int i=0;
	arr[n]=arr[n+1]=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>arr[n]){
			arr[n]=arr[i];
		}
	}
	for(i=0;i<n;i++){
		if(arr[i]>arr[n+1] && arr[i]!=arr[n]){
			arr[n+1]=arr[i];
		}
	}
}
int main(){
	int n,i=0,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	small_big(arr,n);
	printf("%d\n",arr[n+1]);
}
