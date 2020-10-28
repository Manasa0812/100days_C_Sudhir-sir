#include<stdio.h>
int min(int a,int b)
{
	if(a>b)
	return b;
	return a;
}
int trap_water(int arr[],int n)
{
	int i=0,max1=0,lit=0,max2=0,j=0;
	for(i=1;i<n;i++)
	{
	    max1=arr[i];
	    max2=arr[i];
	    for(j=0;j<i;j++)
	    {
	    	if(max1<arr[j])
	    	{
	    		max1=arr[j];
			}
		}
		for(j=i;j<n;j++)
		{
			if(max2<arr[j])
			{
				max2=arr[j];
			}
		}
		lit+=min(max1,max2)-arr[i];
	}
	return lit;
}
int main()
{
	int n=0,i=0,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d",trap_water(arr,n));
	return 0;
}
