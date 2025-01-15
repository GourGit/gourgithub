#include<stdio.h>
int main(){
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	if(n==0)
	printf("Invalid");
	if(n==(n/2*2))
	printf("Even");
	else
	printf("Odd");
	return 0;
}