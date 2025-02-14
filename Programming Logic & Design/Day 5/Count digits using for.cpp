#include<stdio.h>
int main(){
	int n,count=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(;n!=0;n=n/10){
		count++;
	}
	printf("The number of digits are: %d",count);
	return 0;
}