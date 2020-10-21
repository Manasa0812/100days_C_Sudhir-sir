#include<stdio.h>
int *marks_rank(int *arr,int n){
	static int res[100]={0};
	int i=0,min=0,j=0,pos=0,count=0,copy[100]={0};
	min=arr[i];
	for(i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
			pos=i;
		}
		if(i==n-1){
		    copy[count]=min;
		    i=-1;
		    if(copy[count-1]==min){
		    	res[pos]=j;
			}
			else{
				j++;
				res[pos]=j;
			}
			arr[pos]=1001;
			min=arr[pos];
			count++;
			if(count==n){
				i=n;
			}
		}
	}
	return res;
}
int main()
{
	int arr[100]={0},n=0,i=0,*res;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	res=marks_rank(arr,n);
	for(i=0;i<n;i++){
		printf("%d ",res[i]);
	}
	return 0;
}
