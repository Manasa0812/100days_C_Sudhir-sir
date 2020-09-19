#include<stdio.h>
int main()
{
	int n,r,eve=0,odd=0;
	scanf("%d",&n);
	while(n){
		r=n%10;
		if(r%2==0){
			eve++;
		}else{
			odd++;
		}
		n=n/10;
	}
	printf("even numbers:%d\n",eve);
	printf("odd numbers:%d\n",odd);
	if(eve>odd){
		printf("even numbers are more: %d\n",eve);
	}
	else if(odd>eve){
		printf("odd numbers are more %d\n",odd);
	}
	else{
		printf("both are equal");
	}
}
