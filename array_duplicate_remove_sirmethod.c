#include<stdio.h>
#include<stdlib.h>
int remove_duplicate(int *arr,int n){
	int *a,r=0,i=0,j=0,k=0,max=0,*b;
	for(i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
   a=calloc(max,sizeof(int *));
   b=calloc(max,sizeof(int *));
//   for(i=0;i<max;i++){
//		printf("%d ",a[i]); array a will be intilaised with zeroes and size is of max element in "arr" array
//	}
  for(i=0;i<n;i++){
  	a[arr[i]-1]++;
}
//for(i=0;i<max;i++){
//		printf("%d ",a[i]); prints count of every element in array arr
//	}
for(i=0;i<n;i++){
	if(a[arr[i]-1]!=0){
		b[j++]=arr[i];
		a[arr[i]-1]=0;
	}
}
for(i=0;i<n;i++){
	arr[i]=b[i];
}
return j;
}
int main(){
	int arr[100],n,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	n=remove_duplicate(arr,n);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
