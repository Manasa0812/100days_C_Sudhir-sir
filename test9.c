#include<stdio.h>
#include<stdlib.h>
int fun_cmp(const void *m,const void *n){
	return (*(int *)m-*(int *)n);
}
int find_heights(int *arr,int *p,int n){
	int i=0,count=0;
	for(i=0;i<n;i++){
		if(arr[i]!=p[i]){
			count++;
		}
	}
	return count;
}
int main()
{
	int n,i=0,arr[100],p[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
		for(i=0;i<n;i++){
		p[i]=arr[i];
	}
	qsort(p,n,sizeof(int),fun_cmp);
	printf("%d",find_heights(arr,p,n));
	return 0;
}
