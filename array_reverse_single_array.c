void reverse(int *arr,int n){
	int i=0,a=0,b=0,j=0;
	for(i=0,j=n-1;i<n/2;i++){
		a=arr[i];
		b=arr[j];	
       arr[i]=b;
       arr[j]=a;
       j--;
	}
}
#include<stdio.h>
int main()
{
int n,arr[100],i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
reverse(arr,n);
for(i=0;i<n;i++)
{
   printf("%d ",arr[i]);
}
return 0;
}


