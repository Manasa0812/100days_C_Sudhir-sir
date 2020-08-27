#include<stdio.h>
int find_lcm(int a,int b,int *gcd){
	int t=2,res=1;
while(a>=t && b>=t){
	if(a%t==0 && b%t==0){
		res=res*t;
		a=a/t;
		b=b/t;
	}else{
		t++;
	}
}
*gcd=res;
return res*a*b;//if a and b removed then only res is returned we will get GCD
}
int main(){
	int a,b,lcm,gcd;
	scanf("%d%d",&a,&b);
	lcm=find_lcm(a,b,&gcd);
	printf("%d %d",lcm,gcd);
	return 0;
}
