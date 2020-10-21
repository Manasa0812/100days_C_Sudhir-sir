#include<stdio.h>
int remove_duplicate(int *arr,int n){
	int a[100],i=0,j=0,k=0,temp=0,f=0;
	for(i=0;i<n;i++){
		f=0;
		for(k=0;k<j;k++){
			if(arr[i]==a[k]){
				f=1;
				break;
			}
		}
		if(f==0){
			a[j++]=arr[i];
		}
	}
	for(i=0;i<j;i++){
		arr[i]=a[i];
	}
	return j;
}
int main()
 {
 int n,arr[100],i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&arr[i]);
 }
 n=remove_duplicate(arr,n);//fun call
 for(i=0;i<n;i++)
 {
 printf(" %d ",arr[i]);
 }
 return 0;
 }
