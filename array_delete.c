#include<stdio.h>
#include<stdlib.h>
void delete(int *arr,int n,int pos){
	int i=0;
	if(pos<=n-1){
			for(i=pos;i<n-1;i++){
		if(i>=pos){
			arr[i]=arr[i+1];
		}
	}
	}else{
	  printf("array out of range");	
	}

}
int main(){
	int n,arr[100],i=0,pos=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&pos);
	delete(arr,n,pos);
	for(i=0;i<n-1;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
