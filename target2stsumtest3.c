#include<stdio.h>
int * find_pos(int *arr,int n,int val){
	static int b[2]={-1,-1},count=0;
	int i=0,flag=0,j=0;
	for(i=0,j=0;i<n;i++){
		if(arr[i]==val && count==0){
			b[j++]=i;
			count++;
		}
		else if(arr[i]==val){
			count=i;
		}
	}
	if(count!=0)
	b[j]=count;
	return b;
}
int main(){
	int arr[100],i=0,n=0,val=0,*b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&val);
	b=find_pos(arr,n,val);
	for(i=0;i<2;i++){
		printf("%d ",b[i]);
	}
	return 0;
}
