#include<stdio.h>
#include<stdlib.h>
int half_alternate(int *arr,int n){
	int i=0,j=0,k=0,b[100];
k=n/2;
	for(i=0;i<n;){
			b[j++]=arr[i++];
			b[j++]=arr[k++];
	}
	for(i=0;i<n;i++){
		arr[i]=b[i];
	}
	return n;	
}
int main()
{
	int n,i=0,j=0,arr[100],k=0;
	scanf("%d",&n);
	n=2*n;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	n=half_alternate(arr,n);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
