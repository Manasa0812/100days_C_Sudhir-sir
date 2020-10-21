#include<stdio.h>
int main(){
	int n=0,i=0,arr[100]={0},val=0,count=0,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&val);
	count=val;
	while(count--){
		for(i=0;i<n;i++){
			    if((i==0) && (arr[i]!=1) && (arr[i+1]!=1)){
			    	arr[i]=1;
			         flag++;
				}
			else if((arr[i]!=1) && (arr[i+1]!=1) && (arr[i-1]!=1)){
					arr[i]=1;
			        flag++;
		    }
		    if(flag==val){
		    	break;
			}
		}
	}
		if(flag==val){
			printf("True");
		}else{
			printf("False");
		}
	return 0;
}
