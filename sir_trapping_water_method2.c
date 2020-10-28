#include<stdio.h>
int min(int a,int b)
{
	if(a>b)
	return b;
	return a;
}
int trap_water(int arr[],int n)
{
     int left[100]={0},right[100]={0},i=0,j=0,lit=0;
	 for(i=0,j=0;i<n;i++)
	 {
	      if(arr[j]>=arr[i]){
	      	left[i]=arr[j];
		  }else{
		  	j=i;
		  	left[i]=arr[i];
		  }	
     }
     for(i=n-1,j=n-1;i>=0;i--)
	 {
	      if(arr[j]>=arr[i]){
	      	right[i]=arr[j];
		  }else{
		  	j=i;
		  	right[i]=arr[i];
		  }	
     }
     for(i=1;i<n;i++)
     {
     	lit+=min(left[i],right[i])-arr[i];
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
