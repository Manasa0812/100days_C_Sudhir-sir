#include<stdio.h>
int length(char str[])
{
	int i=0;
	for(i=0;str[i]!='\0';i++);
	return i;
}
char *reverse_string(char str[])
{
	int i=0,j=0,len=0;
	static char str2[100];
	len=length(str);
	for(i=len-1;i>=0;i--)
	{
		str2[j++]=str[i];
	}
	str2[j]='\0';
	//printf("%s",str2);
	return str2;
}
//using same string
void reverse_same_string(char str[])
{
	int i=0,j=0,len=0;
	char temp;
	len=length(str);
	for(i=len-1,j=0;i>j;i--,j++)
	{
		temp=str[j];
		str[j]=str[i];
		str[i]=temp;
	}
}
int main()
{
	char str[100];
	scanf("%s",&str);
	//reverse_same_string(str);
//	printf("%s",str);
printf("%s",reverse_string(str));
	return 0;
}
