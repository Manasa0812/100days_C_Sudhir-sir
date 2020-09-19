#include<stdio.h>
void find_digit(int num,int d){
	int r,c=0;
	while(num){
		r=num%10;
		if(d==r){
			printf("TRUE");
			c++;
			break;
		}
		num=num/10;
		if(num==0){
			printf("%d\n",r);
		}
	}
	printf("%d",r);
	if(c==0){
		printf("false");
	}
	
}
int main(){
	int num,d;
	scanf("%d%d",&num,&d);
	find_digit(num,d);
	return 0;
}
