#include<stdio.h>
int find_target(int *arr,int n,int val){
	int i=0;
	for(i=0;i<n;i++){
		if(val==arr[i] || val<arr[i]){
			return i;
		}
	
	return i;
}
int main(){
	int arr[100]={0},n=0,val=0,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&val);
	printf("%d",find_target(arr,n,val));
	return 0;
}
