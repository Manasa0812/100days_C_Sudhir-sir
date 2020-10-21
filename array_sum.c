#include<stdio.h>
int sum_arr(int *arr,int n){
	int i=0,sum=0;
for(i=0;i<n;i++){
	sum=sum+arr[i];
}
return sum;
}
int main(){
	int arr[100],n,i=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sum=sum_arr(arr,n);
	printf("%d",sum);
	return 0;
}

