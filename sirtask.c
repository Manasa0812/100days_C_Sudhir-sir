#include<stdio.h>
int main(){
	int t,s1,s2,i;
	printf("which table u want?");
	scanf("%d\n",&t);
	scanf("%d",&s1);
	scanf("%d",&s2);
	if(s1>s2){
		 for(i=s2;i<=s1;i++)
			{
		     printf("%d X %d = %d\n",t,i,t*i);
	        }
		
	}else{
		for(i=s1;i<=s2;i++)
			{
	          	printf("%d X %d = %d\n",t,i,t*i);
	         }	
   }

	return 0;
}
