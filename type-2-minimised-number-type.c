#include<stdio.h>
void find_type(int n){
	int f=1,r,num;
	num=n;
	while(n){
		r=n%10;
		n=n/10;
		if(n%2==0 && r%2!=0){
			f=2;
			break;
		}else if(n%2!=0 && r%2==0){
			f=2;
			break;
		}
		}
		if(f==1 && num%2==0){
				printf("EVEN\n");
			}
			else if(f==1 && num%2!=0){
				printf("ODD\n");
			}else{
				printf("MIXed");
			}
	}
int main()
{
	int n;
	scanf("%d",&n);
	find_type(n);
	return 0;
}

