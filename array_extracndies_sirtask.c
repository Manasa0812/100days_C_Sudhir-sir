#include<stdio.h>
void extracandies(int *arr,int n,int c){
	int a[100],i=0,max=0;
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
 for(i=0;i<n;i++){
 	if((arr[i]+c)>=max){
 		arr[i]=1;
	 }else{
	 arr[i]=0;
	 }
 }
}
int main(){
	int n=0,c=0,arr[100],i=0;
	scanf("%d%d",&n,&c);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	extracandies(arr,n,c);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
