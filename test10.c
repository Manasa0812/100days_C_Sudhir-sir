#include<stdio.h>
void duplicate_zero(int *arr,int n){
	int i=0,j=0;
	for(i=0;i<n;i++){
		if(arr[i]==0){
			for(j=n-1;j>i;j--){
				arr[j+1]=arr[j];
			}
	      arr[i+1]=0;
	      i++;
		}
	}
}
int main()
{
	int n=0,arr[100]={0},i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	duplicate_zero(arr,n);
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
