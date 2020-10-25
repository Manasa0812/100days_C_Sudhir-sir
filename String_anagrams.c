#include<stdio.h>
int length(char *str)
{
	int i=0;
	for(i=0;str[i]!='\0';i++);
	return i;
}
int is_anagram(char *str1,char str2[]){
	int len1=0,len2=0,a[26]={0},b[26]={0},ind=0,i=0;
	len1=length(str1);
	len2=length(str2);
	//printf("%d %d",len1,len2);
	for(i=0;i<len1;i++)
	{
		ind=str1[i]-97;
		a[ind]++;
	}
	for(i=0;i<len1;i++)
	{
		ind=str2[i]-97;
		b[ind]++;
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=b[i])
		return 0;
	}
	return 1;
}
int main()
{
	char str1[100],str2[100];
	scanf("%[^\n]s",&str1);
	scanf(" %[^\n]s",&str2);
	//printf("%s\n%s",str1,str2);
	if(is_anagram(str1,str2)){
		printf("True");
	}else{
		printf("False");
	}
	return 0;
}
