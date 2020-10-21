#include<stdio.h>
int *reverse(int rev[],int num){
	int i=0,j=num-1,temp=0;
	while(i<j){
	  temp=rev[i];
	  rev[i]=rev[j];
	  rev[j]=temp;
	  j--;
	  i++;	
	}
	return rev;
}
int *is_leader(int arr[],int *n){
	static int res[100]={0};
	int i=0,count=0,j=0;
	for(j=*n-1,i=0;j>=0;j--){
		if(i==0){
			res[i++]=arr[j];
			count++;
		}
		else{
			if(arr[j]>res[i-1]){
				res[i++]=arr[j];
				count++;
			}
		}
	}
	*n=count;
	return reverse(res,count);
}
int main(){
	int arr[100]={0},n=0,i=0,*res;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	res=is_leader(arr,&n);
	for(i=0;i<n;i++){
		printf("%d ",res[i]);
	}
	return 0;
}
