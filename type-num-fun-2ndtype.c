#include<stdio.h>
void find_type(int n){
	int f,r;
	if(n%2==0){
		f=1;
	}
	else{
		f=0;
	}
	while(n){
		r=n%10;
		n=n/10;
		if(f==1 && r%2!=0){
			f=2;
			break;
		}else if(f==0 && r%2==0){
			f=2;
			break;
		}
		}
		if(f==1){
				printf("EVEN\n");
			}
			else if(f==0){
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


































//#include<stdio.h>
//void find_type(int n){
//	int r,eve,odd,ec=0,oc=0,count=0;
//	while(n){
//		r=n%10;
//		n=n/10;
//		if(r%2==0){
//			eve=n;
//			ec++;
//			if(eve%2==0){
//					printf("EVEN\n");
//					break;
//			}
//		}
//		else{
//			odd=n;
//			printf("%d\n",n);
//			if(odd%2!=0){
//					printf("ODD\n");
//					break;
//			}
//		}
//		count++;
//	}
//
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	find_type(n);
//}
