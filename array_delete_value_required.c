#include<stdio.h>
void delete(int *arr,int *n,int val){
	int i=0,flag=0;
	for(i=0;i<*n;i++){
		if(arr[i]==val){
			arr[i]=arr[i+1];
			flag++;
//			if(arr[i]==val){
//				printf("m");
//				arr[i]=arr[(++i)+1];
//			}
//			if(i==*n-1){
//				printf("last:%d %d\n",arr[*n-flag],i);
//				i++;
//				*n--;
//			}
		}else if(flag==0){
			arr[i]=arr[i];
		}else{
			if(i==*n-1){
					printf("m");
				arr[*n-1-flag]=arr[*n-1];
				printf("a[i]=%d;a[i]=%d;n-1=%d\n",arr[*n-1],arr[i],i);
			}
			else{
					arr[i]=arr[i+1];
			}
		}
	}
	*n=*n-flag;
}
int main(){
	int n,arr[100],i=0,val=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&val);
	delete(arr,&n,val);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
