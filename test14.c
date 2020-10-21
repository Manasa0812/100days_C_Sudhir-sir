#include<stdio.h>
int is_pattern(int *arr,int *p,int m,int k,int n){
	int i=0,count=0,temp=0,j=0;
	temp=k;
	while(k){
		if(p[j]==arr[i++]){
			count++;
			j++;
			if(count==m){
				k--;
				j=0;
				count=0;
			}
		}
		else{
			if(k!=temp && k!=0){
				return 0;
			}
			if(count>0){
				return 0;
			}
		}
		if(k==0){
		return 1;
     	}
		if(i>=n){
			return 0;
		}	
	}
}
int main(){
	int arr[100]={0},p[100]={0},m=0,k=0,i=0,n=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d%d",&m,&k);
	for(i=0;i<m;i++){
		scanf("%d",&p[i]);
	}
	if(is_pattern(arr,p,m,k,n)==0){
		printf("False");
	}else{
		printf("True");
	}
	return 0;
}
