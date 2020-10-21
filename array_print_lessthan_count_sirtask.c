#include<stdio.h>
void find_lessnumcount(int *arr,int n){
	int a[100],i=0,j=0,count=0;
	while(j<n){
		for(i=0;i<n;i++){
			if(arr[j]>arr[i]){
				count++;
			}
		}
		a[j]=count;
		count=0;
		j++;
	}
	for(i=0;i<n;i++){
		arr[i]=a[i];
	}
}
int main(){
	int n=0,arr[100],i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	find_lessnumcount(arr,n);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
