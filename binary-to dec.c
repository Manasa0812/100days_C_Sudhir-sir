#include<stdio.h>
#include<math.h>
int binary_dec(int n)
{
	int r,p,c=0,sum=0;
	while(n){
		r=n%10;
		if(r==1){
			p=pow(2,c);
			sum=sum+(r*p);
		}
		else if(r>0){
			return 0;
			break;
		}
		n=n/10;
		c++;
	}
	return sum;
}
int main(){
	int n;
	scanf("%d",&n);
	n=binary_dec(n);
	printf("%d\n",n);
	return 0;
}
