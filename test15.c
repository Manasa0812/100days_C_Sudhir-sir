#include<stdio.h>
int is_mountain(int *arr,int n){
	int i=0,asc=0,desc=0;
	if(arr[i]<arr[i+1]){
		for(i=0;i<n-1;i++){
			if(arr[i]<arr[i+1] && desc==0){
				asc++;
			}
			else if(arr[i]>arr[i+1]){
				desc++;
			}
		}
	}
	if(desc!=0 && asc!=0 && (asc+desc)==n-1){
		return 1;
	}else{
		return 0;
	}
}
int main()
{
	int arr[100]={0},n=0,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	if(n>=3){
		if(is_mountain(arr,n)){
		printf("True");	
		}else{
			printf("False");
		}
		}
		else{
			printf("False");
		}
    return 0;
}
