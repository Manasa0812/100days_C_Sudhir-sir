#include<stdio.h>
int is_monotonic(int *arr,int n){
	int i=0,count=0,flag=0;
	for(i=0;i<n-1;i++){
		if(arr[i]<=arr[i+1]){
			count++;
		}
		 if(arr[i]>=arr[i+1]){
			flag++;
		}
	}
	if(flag==n-1 || count==n-1){
		return 1;
	}else{
		return 0;
	}
}
int main()
{
	int n=0,arr[100]={0},i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	if(is_monotonic(arr,n)==1){
		printf("True");
	}else{
		printf("False");
	}
	return 0;
}
