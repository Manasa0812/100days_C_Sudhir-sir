#include<stdio.h>
#include<stdlib.h>
int *eveodd_arr(int *arr,int n){
	 int *s;
	  s=malloc(n*4);
	int i=0;
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			s[0]++;
			s[2]=s[2]+arr[i];
		}else{
			s[1]++;
			s[3]=s[3]+arr[i];
		}
	}
    return s;
}
int main(){
	int arr[100],n,i=0,*s;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	s=eveodd_arr(arr,n);
	printf("even:%d sum:%d\n",s[0],s[2]);
	printf("odd:%d sum:%d",s[1],s[3]);
	return 0;
}

