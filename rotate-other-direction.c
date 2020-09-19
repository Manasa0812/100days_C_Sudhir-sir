#include<stdio.h>
#include<math.h>
int rotate_right_binary(unsigned int n,unsigned int d){
	unsigned int A=0,B=0,f=0,bc=0;
	bc=(int)log2(n)+1;
	f=bc-d;
	A=n>>d;
	B=n<<64-d;
	B=B>>64-d;
	B=B<<f;
	return A|B;
}
int main(){
	unsigned int n,d;
	scanf("%u%u",&n,&d);
	printf("%u",rotate_right_binary(n,d));
	return 0;
}
