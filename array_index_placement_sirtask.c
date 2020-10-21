#include<stdio.h>
int * change_index(int *num,int *index,int n){
	static int res[100];
	int i=0,j=0,k=0;
	for(i=0;i<2*n;i++){
		res[i]=-1;
	}
	for(i=0,j=0;i<n;i++,j++){
		if(res[index[j]]==-1){
			res[index[j]]=num[i];
		}
		else{
			for(k=2*n;k>=index[j];k--){
				res[k+1]=res[k];
			}
			res[index[j]]=num[i];
		}
	}
	
	return res;
}
int main(){
	int n,num[100],index[100],i=0,j=0,*res;
     scanf("%d",&n);
	 for(i=0;i<n;i++){
	 	scanf("%d",&num[i]);
	 }	
	 for(i=0;i<n;i++){
	 	scanf("%d",&index[i]);
	 }
	 res=change_index(num,index,n);
	 for(i=0,j=0;j<n;i++){
	 	if(res[i]>=0){
	 		printf(" %d ",res[i]);
			 j++;	
		 }
	 }
//for(i=0;i<2*n;i++){
//	printf("%d ",res[i]);
//}
	 return 0;
}
