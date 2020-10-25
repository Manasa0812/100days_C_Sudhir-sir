#include<stdio.h>
int find_batsman(int arr[],int n){
	int i=1,b[100]={0},k=1,j=1,count=0;
	while(i<=n){
		if(arr[i]%2==0 && i%6!=0 || arr[i]==0 && i%6!=0 || arr[i]%2!=0 && i%6==0){
			if(b[j]!=-1){
				b[j]=1;
			}
			else{
				while(count!=1){
					if(b[k]==0 && b[k]!=-1 && k!=j){
						b[k]=1;
						count=1;
						j=k;
					}else{
						k++;
					}
				}
				k=1;
				count=0;		
			}
		}else if(arr[i]%2!=0 && arr[i]!=-1 && i%6!=0 || (i%2==0 && i%6==0)){
			b[j]=0;	
				while(count!=1){
					if(b[k]==0 && b[k]!=-1 && k!=j){
						b[k]=1;
						count=1;
						j=k;
					}
					else{
							k++;
					}
				}
				k=1;
				count=0;		
		}
		else if(arr[i]==-1){
			b[j]=-1;
			j++;
		}
		i++;
	}
	for(i=1;i<=n;i++){
		if(b[i]==1){
			return i;
		}
		
	}
}
int main()
{
	int n=0,arr[100],i=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	printf("ans: %d",find_batsman(arr,n));
	return 0;
}
