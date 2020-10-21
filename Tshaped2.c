#include<stdio.h>
int max_consecutive(int *arr,int n){
	int i=0,max=0,count=0;
	for(i=0;i<n;i++){
		if(arr[i]==1){
			count++;
		}
		else if(arr[i]==0){
			if(count>max){
				max=count;
			}
			count=0;
		}		
	}
	if(count>max){
		max=count;
	}
	return max;
}
int main()
{
	int n=0,arr[100]={0},i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("%d",max_consecutive(arr,n));
}
