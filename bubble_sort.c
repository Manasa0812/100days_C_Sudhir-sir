#include<stdio.h>
void bubble_sort(int arr[],int n)
{
	int i=0,j=0,k=0,temp=0,count=1;
	while(j++<n)
	{
		for(i=0,k=1;i<n-1;i++,k++)
		{
			if(arr[i]>arr[k]){
				temp=arr[i];
				arr[i]=arr[k];
				arr[k]=temp;
				count=1;
			}
		}
		if(count!=1)
		{
			break;
		}
		count=0;
	}
}
int main()
{
	int n=0,i=0,arr[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
