#include<stdio.h>
int main(){
	int n,fact=1;
	printf("Enter any number: ");
	scanf("%d",&n);
	int i=1;
	while(i<=n){
		fact*=i;
		i++;
	}
	printf("The factorial is: %d",fact);
	return 0;
}