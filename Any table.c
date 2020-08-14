#include<stdio.h>
int main(){
	int t,s1,s2,i;
	printf("which table u want?");
	scanf("%d",&t);
	printf("enter starting of step\n");
	scanf("%d",&s1);
	printf("enter ending no.  step\n");
	scanf("%d",&s2);
	if(s1>s2){
		 for(i=s1;i>=s2;i--)
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
