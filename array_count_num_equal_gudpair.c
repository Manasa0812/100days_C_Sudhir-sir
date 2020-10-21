#include<stdio.h>
int find_count_equal(int *arr,int n){
	int i=0,j=0,count=0;
	while(j<n){
		for(i=j+1;i<n;i++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		j++;
	}
	return count;
}
int main(){
	int n=0,arr[100],i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	n=find_count_equal(arr,n);
	printf("%d ",n);
	return 0;
}
