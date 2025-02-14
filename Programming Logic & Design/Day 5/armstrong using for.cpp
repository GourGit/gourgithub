#include<stdio.h>
int main(){
	int n,r,rev=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	int num=n;
	for(;n!=0;n=n/10){
		r=n%10;
		rev=rev+(r*r*r);
	}
	if(rev==num){
	printf("Armstrong number");
	}
	else{
	printf("Not Armstrong number");
	}
	return 0;
}