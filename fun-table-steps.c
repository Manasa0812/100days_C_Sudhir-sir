#include<stdio.h>
void table(int t,int s){
	int i;
	for(i=1;i<=s;i++){
		printf("%d x %d = %d\n",t,i,t*i);
	}
}
int main()
{
	int t,s;
	scanf("%d%d",&t,&s);
	table(t,s);
	return 0;
}
