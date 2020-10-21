#include<stdio.h>
int is_largest(int *arr,int n){
	int i=0,max=0,flag=0;;
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	for(i=0;i<n;i++){
		if(arr[i]!=max && (arr[i]*2<=max)){
			flag++;
		}
	}
	return flag;
}
int main(){
	int n=0,arr[100]={0},i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	if(is_largest(arr,n)==n-1){
		printf("1");
	}else{
		printf("-1");
	}
	return 0;
}
