#include<stdio.h>
void order(int n){
	int i=1,num;
	num=n;
   while(n){
   	if(i<n){
  printf("%d ",i++);}
  else{
   	printf(" %d",n--);
   }
   } 
}
int main(){
	int n;
	scanf("%d",&n);
	order(n);
}
