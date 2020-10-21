#include<stdio.h>
void insert(int *arr,int n,int pos,int val){
	int i=0;
	if(pos<n){
	for(i=n-1;i>=pos;i--){                      //1 2 3 4 5 pos:2
		arr[i+1]=arr[i];                        //1 2 3 4 5 5
	}                                           // 1 2 3 4 4 5
	arr[pos]=val;                               // 1 2 3 3 4 5
}
else{
	arr[n]=val;
}
}
int main(){
	int n,arr[100],pos=0,val=0,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d%d",&pos,&val);
	insert(arr,n,pos,val);
	for(i=0;i<=n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
