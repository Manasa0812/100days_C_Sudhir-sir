#include<stdio.h>
int shortest_dist(int arr[],int n,int start,int end){
	int i=0,sum=0,min=0;
	for(i=start;i<end;i++){
		sum=sum+arr[i];
	}
	min=sum;
	sum=0;
	for(i=end;i>start || i<start;){
		sum=sum+arr[i];
		i=(i+1)%n;
		if(i==start)
		break;
	}
	if(min>sum){
		return sum;
	}else{
		return min;
	}
	return 0;
}
int main()
{
	int arr[100]={0},i=0,n=0,start=0,end=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d%d",&start,&end);
	printf("%d",shortest_dist(arr,n,start,end));
	return 0;
}
