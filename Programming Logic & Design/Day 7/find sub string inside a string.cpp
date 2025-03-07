#include<stdio.h>
#include<string.h>
int main(){
	char s1[20];
	char s2[20];
	printf("Enter elements in main string: ");
	gets(s1);
	printf("Enter elements in sub string: ");
	gets(s2);
	
	char *p = strstr(s1,s2);
	printf("String Found\n");
	printf("The sub string is: %s",s2);
	
	return 0;
}