void moveZeros(int *arr,int n){
	int i=0,a[100],j=0,temp=n;
	for(i=0;i<n;i++){
		if(arr[i]!=0){
			a[j++]=arr[i];
		}
		else{
			a[--temp]=0;
		}
	}
	for(i=0;i<n;i++){
		arr[i]=a[i];
	}
}
#include<stdio.h>

 int main()

 {

 int n,arr[100],i;

 scanf("%d",&n);

 for(i=0;i<n;i++)

 {

 scanf("%d",&arr[i]);

 }

 moveZeros(arr,n);//fun call

 for(i=0;i<n;i++)

 {

 printf("%d ",arr[i]);

 }

 return 0;

 }
