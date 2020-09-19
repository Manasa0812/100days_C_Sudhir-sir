#include<stdio.h>
int reverse(int m){
	int r,rev=0;
	while(m){
		r=m%10;
		m=m/10;
		rev=rev*10+r;
	}
	return rev;
}
int change_num(int n){
	int f,l,m,r,c=1,num=0;//c=1 so that 1*10=10;10*10=100;---------------
	while(n){
		r=n%10;
		n=n/10;
		if(c==1){
			f=r;
		}else if(n==0){
			l=r;
		}
		else{
			m=m*10+r;
		}
		c=c*10;
	}
	m=reverse(m);
	num=m*10+l;
	num=f*c/10+num;
//	return (f*c/10)+(m*10+l);
    return num;
}
int main(){
  int n;
  scanf("%d",&n);
  n=change_num(n);
  printf("%d",n);	
}
