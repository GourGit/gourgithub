#include<stdio.h>
#include<string.h>
int main(){
	char s1[20];
	gets(s1);
	int i=0;
	while(s1[i] != '\0'){
		printf("ASCII value of %c = %d\n",s1[i],s1[i]);
		i++;
	}
	return 0;
}