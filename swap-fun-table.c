#include<stdio.h>
void table(int t,int s1,int s2){
	int d,i;
	if(s1>s2){
		d=s1;
		s1=s2;
		s2=d;
	}
	for(i=s1;i<=s2;i++){
		printf("%d x %d = %d\n",t,i,t*i);
	}
}
int main()
{
	int t,s1,s2;
	scanf("%d%d%d",&t,&s1,&s2);
	table(t,s1,s2);
	return 0;
}
