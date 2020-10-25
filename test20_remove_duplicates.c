#include<stdio.h>
int is_duplicate(int arr[],int n){
	int i=0,j=0;
	while(i<n){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j] && i!=j){
				return 0;
			}
		}
		i++;
	}
	return 1;
}
int main()
{
	int arr[100],i=0,n=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	if(is_duplicate(arr,n)){
		printf("False");
	}else{
		printf("True");
	}
}
