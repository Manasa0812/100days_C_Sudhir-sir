#include<stdio.h>
void selection_sort(int arr[],int n)
{
	int i=0,j=0,k=0,min=0,temp=0,pos=0;
	while(j<n)
	{
		min=arr[j];
		for(i=j;i<n;i++)
		{
			if(min>arr[i])
			{
				min=arr[i];
				pos=i;
			}
		}
		if(min!=arr[j]){
			temp=arr[j];
		arr[j]=min;
		arr[pos]=temp;
		}
		j++;
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
	selection_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
