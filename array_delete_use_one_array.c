#include<stdio.h>
#include<stdlib.h>
int delete(int *arr,int n,int val){
	int i=0,j=0,k=0;
	for(i=0;i<n;){
		if(arr[i]==val){
			for(j=i;j<n-k;j++){
			arr[j]=arr[j+1];	
			}
			k++;
		}else{
			i++;
		}
	}
	n=n-k;
	return n;
}
int main(){
	int n,arr[100],i=0,val=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&val);
	n=delete(arr,n,val);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
