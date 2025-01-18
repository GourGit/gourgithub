#include<stdio.h>
int main(){
	int a,b;
	printf("Enter any two numbers: ");
	scanf("%d%d",&a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("a=%d and b=%d",a,b);
	return 0;
}