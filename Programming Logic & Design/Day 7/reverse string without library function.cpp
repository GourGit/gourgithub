#include<stdio.h>
#include<string.h>
int main(){
	char s1[20],temp;
	printf("Enter string: ");
	gets(s1);
	
	int p=strlen(s1)-1;
	for(int i=0;i<p/2;i++){
		temp=s1[i];
		s1[i]=s1[p];
      s1[p--]=temp;
	}
	printf("The reversed string is: %s",s1);
	return 0;
}