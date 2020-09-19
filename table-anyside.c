#include<stdio.h>
void table_steps_user(int t,int s1,int s2){
	int i;
	if(s1<s2)
	     {
		for(i=s1;i<=s2;i++){
			printf("%d x %d = %d\n",t,i,t*i);
		}
		}
		else{
				for(i=s2;i<=s1;i++){
			printf("%d x %d = %d\n",t,i,t*i);
		}
	}	
}
int main(){
	int t,s1,s2;
	scanf("%d%d%d",&t,&s1,&s2);
	table_steps_user(t,s1,s2);
	return 0;
}
