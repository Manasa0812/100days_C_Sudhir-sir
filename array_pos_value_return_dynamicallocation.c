#include<stdio.h>
#include<stdlib.h>
int *insert(int *arr,int n,int pos,int val){
	int i=0,j=0,*b;//arr,b
	b=malloc(n*sizeof(int));
	for(i=0,j=0;i<n;){
		if(j==pos){
			b[j++]=val;
		}else{
			b[j++]=arr[i++];
		}
	}
	return b;
}
int main(){
	int n,*arr,*b,i=0,pos=0,val=0;
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d%d",&pos,&val);
	b=insert(arr,n,pos,val);
	for(i=0;i<=n;i++){
		printf("%d ",b[i]);
	}
	return 0;
}
