#include<stdio.h>
#include<math.h>
int rotate_binary(int n,int d){
	 int A=0,f=0,bc=0,B=0;
	bc=(int)log2(n)+1;
	f=bc-d;
	A=n<<64-f;
	A=A>>64-f;
	A=A<<d;
	B=n>>f;
	return A|B;
}
int main()
{
    int n,d=0;
   scanf("%d%d",&n,&d);
   printf("%d",rotate_binary(n,d));  	
   return 0;
}
