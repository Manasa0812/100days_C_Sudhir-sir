#include<stdio.h>
void insertion_sort(int arr[],int n)
{
	int i=0,j=0,k=0,temp=0;
	while(j<n)
	{
		for(i=0;i<j;i++)
		{
			if(arr[j]<arr[i])
			{
				for(k=j;k>i;k--)
				{
					temp=arr[k];
					arr[k]=arr[k-1];
					arr[k-1]=temp;
				}
				break;
			}
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
	insertion_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
