#include<stdio.h>
int remove_duplicate(int *arr,int n){
	int i=0,temp=0,j=0,count=0,k=0;
	k=n;
	for(i=0;i<k;i++){
		temp=arr[i];
		n=n-count;
		count=0;
	  for(j=i+1;j<k;j++){
	  	if(arr[j]==temp){
	  		arr[j]=arr[j+1];
	  	count++;
	  	printf(" count:%d",count);
		  }
//		  if(count==1){
//		  		n=n-count;
//			  }
		  else if(count>0){
		  	arr[j]=arr[j+1];
		  } 
	  }
	}
//	n=n-count;
return n;
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
 printf("final %d ",arr[i]);
 }
 return 0;
 }
