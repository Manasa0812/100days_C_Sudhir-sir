#include<stdio.h>
#include<math.h>
int prev_fib(int n){
	int sq;
	sq=sqrt(5);
	printf("%d\n",sq);
	sq=(sq+1)/2;
	printf("%d\n",sq);
	n=n/sq;
	printf("%d\n",n);
	return n;
}
int main()
{
 int n;
scanf("%d",&n);
n=prev_fib(n);
printf("%d",n);
}
//has to be modified still
