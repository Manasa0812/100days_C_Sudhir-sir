#include<stdio.h>
#include<math.h>
//int is_perfect(int n){
//	int i=0,sum=0;
//	for(i=1;i<=n/2;i++){
//		if(n%i==0){
//			sum=sum+i;
//		}
//	}
//	if(sum==n){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//or
int is_perfect(int n){
	int i=0,sum=0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			sum=sum+i+(n/i);
		}
	}
return sum+1==n;
}



int main()
{
	int n;
	scanf("%d",&n);
	n=is_perfect(n);
	if(n==1){
		printf("perfect");
	}else{
		printf("not perfect");
	}
}
