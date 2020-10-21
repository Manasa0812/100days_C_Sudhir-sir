#include<stdio.h>
int freq_val(int *arr,int n){
	int i=0,b[100],count=0,j=0;
	for(i=0;i<n;i+=2){
		count=arr[i];	
			while(count--){
				b[j++]=arr[i+1];
			}
	}
	for(i=0;i<j;i++){
		arr[i]=b[i];
	}
	return j;
}
int main(){
	int n,i=0,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	n=freq_val(arr,n);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
