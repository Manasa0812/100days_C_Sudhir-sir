#include<stdio.h>
int main(){
	int n,k,a=0,b=0,count=0,ma=0,ma1=0,max1=0,max2=0,mb=0,mb1=0,mx=0,mx1=0,max3=0;
	scanf("%d%d",&n,&k);
	b=n;
	if(k<=n){
	while(n!=1){
		a=n;
		b=b-1;
		ma=a&b;
		mb=a|b;
     	mx=a^b;
		if(max1<ma1 && ma1<k){
			max1=ma1;
		}else if(ma>max1 && ma<k){
			max1=ma;
		}
		if(max2<mb1 && mb1<k){
			max2=mb1;
		}else if(mb>max2 && mb<k){
			max2=mb;
		}
		if(max3<mx1 && mx1<k){
			max3=mx1;
		}else if(mx>max3 && mx<k){
			max3=mx;
		}
		ma1=ma;
		mb1=mb;
		mx1=mx;
		count++;
		if(count==n-1){
		n=n-1;	
		count=0;
		b=n;
		}
		if(n==1){
			if(max1<ma1 && ma1<k){
			max1=ma1;
		}else if(ma>max1 && ma<k){
			max1=ma;
		}
		if(max2<mb1 && mb1<k){
			max2=mb1;
		}else if(mb>max2 && mb<k){
			max2=mb;
		}
		if(max3<mx1 && mx1<k){
			max3=mx1;
		}else if(mx>max3 && mx<k){
			max3=mx;
		}
		}
	}
	printf("%d",max1);
	printf("\n%d",max2);
	printf("\n%d",max3);
}
}
