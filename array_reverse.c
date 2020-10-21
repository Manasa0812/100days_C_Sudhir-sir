#include<stdio.h>
void reverse(int *arr,int n){
	int b[100],i=0,j=0;
	for(i=0,j=n-1;i<n;i++){
		b[j--]=arr[i];
	}
	for(i=0;i<n;i++){
		arr[i]=b[i];
	}
}
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
  sprintf("%d ",arr[i]);
}
return 0;
}


