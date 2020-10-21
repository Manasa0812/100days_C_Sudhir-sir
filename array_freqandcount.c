#include<stdio.h>
#include<stdlib.h>
int fun_cmp(const void *m,const void *n){
	return (*(int *)m-*(int *)n);
}
int freq_num(int *arr,int n,int max){
	int count[100]={0},i=0,j=0;
	for(i=0;i<n;i++){
		j=arr[i];
		count[j-1]++;
	}
	for(i=0;i<max;i++){
		if(count[i]!=0){
			j=i+1;
			printf("%d %d\n",j,count[i]);
		}
	}	
}
int main()
{
	int arr[100]={0},n=0,i=0,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	qsort(arr,n,sizeof(int),fun_cmp);
    max=arr[n-1];
	freq_num(arr,n,max);
}
