#include<stdio.h>
void final_discountarray(int *arr,int n){
	int i=0,j=0;
	for(i=0,j=1;i<n;){
		if(arr[i]>=arr[j] && i<j){
			//	printf("%d ",arr[i]);
			arr[i]=arr[i]-arr[j];
		//	printf("%d ",arr[i]);
			i++;
		}else{
			j++;
			if(j==n-1){
				i++;
				j=i+1;
			}
		}
	}
}
int main()
{
	int n=0,i=0,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	final_discountarray(arr,n);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	//printf("a[5]:%d",arr[5]);
	return 0;
}
