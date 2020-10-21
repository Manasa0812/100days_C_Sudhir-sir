#include<stdio.h>
int *is_leaders(int *arr,int *n){
	static int res[100]={0};
	int i=0,j=0,num=0,count=0,k=0;
	while(i<*n-1){
		for(j=i+1;j<*n;j++){
			if(arr[i]<arr[j]){
				count=0;
				break;
			}else{
				count=1;
			}
		}
		if(count==1){
			res[k++]=arr[i];
			num++;
		}
		i++;
		count=0;
	}
	res[k]=arr[*n-1];
	*n=num+1;
	return res;
}
int main()
{
	int arr[100]={0},n=0,i=0,*res;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	res=is_leaders(arr,&n);
	for(i=0;i<n;i++){
		printf("%d ",res[i]);
	}
	return 0;
}
