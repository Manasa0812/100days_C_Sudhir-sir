#include<stdio.h>
int is_ascending(int *arr,int n){
	int i=0;
	for(i=0;i<n-1;i++){
		if(arr[i]>arr[i+1])//2 4 6 7 9
		{
				return 0;
		}
	}
	return 1;
}
int main(){
	int arr[100],n,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	if(is_ascending(arr,n)){
	printf("TRUE");	
	}else{
		printf("FALSE");
	}
}
