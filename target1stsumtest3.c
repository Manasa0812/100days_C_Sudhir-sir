#include<stdio.h>
int find_length(int *arr,int n,int val){
	int i=0,count=0;
	for(i=0;i<n;i++){
		if(arr[i]!=val){
			count++;
		}
	}
	return count;
}
int main(){
	int arr[100],i=0,n=0,val=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&val);
	val=find_length(arr,n,val);
	printf("%d",val);
	return 0;
}
