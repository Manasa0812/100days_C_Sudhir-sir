#include<stdio.h>
int fun_cmp(const void *m,const void *n){
	return (*(int *)m-*(int *)n);
}
int is_duplicate(int arr[],int n){
	int i=0;
	for(i=0;i<n-1;i++){
		if(arr[i]==arr[i+1]){
			return 0;
		}
	}
	return 1;
}
int main()
{
	int arr[100],i=0,n=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	qsort(arr,n,sizeof(int),fun_cmp);
	if(is_duplicate(arr,n)){
		printf("False");
	}else{
		printf("True");
	}
}
