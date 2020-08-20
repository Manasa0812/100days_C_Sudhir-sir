#include<stdio.h>
int up_down(int n){
	int r,c=0,eve=0,odd=0,count=0,f;
	r=n%10;
	if(r>n%100/10){
		f=1;
	}else if(r<n%100/10){
		f=0;
	}
	while(n){
		c++;
		if(c==1){
		}
		if(f==1){
			if(r>n%10 && c%2==0){
					eve++;
			}else if(r<n%10 && c%2==1){
				odd++;
			}
		}
		else if(f==0){
			if(r<n%10 && c%2==0){
					eve++;
			}
			else if(r>n%10 && c%2==1){
				odd++;
			}
		}
		r=n%10;
		n=n/10;
	}
	count=eve+odd;
	if((c-1)==count){
		return 1;
	}	
}
int main(){
	int n;
	scanf("%d",&n);
	n=up_down(n);
	if(n==1){
			printf("TRUE");
	}else{
		printf("FALSE");
	}
	return 0;
} 
