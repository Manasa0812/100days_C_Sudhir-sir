#include<stdio.h>
int binary_search(int arr[],int n,int val)
{
	int start=0,end=0,mid=0;
	start=0;
	end=n-1;
	mid=(start+end)/2;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(val>arr[mid]){
			start=mid+1;
		}else if(val==arr[mid]){
			return mid;
		}
		else{
			end=mid-1;
		}
	}
	if(start>end)
	{
	 return 0;
	}
}
int main()
{
	int n=0,i=0,arr[100]={0},val=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&val);
	val=binary_search(arr,n,val);
	if(val!=0){
		printf("%d",val);
	}else{
		printf("element not found");
	}
	return 0;
}
