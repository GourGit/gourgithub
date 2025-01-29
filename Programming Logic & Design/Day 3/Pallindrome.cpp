#include<stdio.h>
int main(){
	int n,r,rev=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	int s=n;
	while(n!=0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==s){
		printf("Pallindrome number");
	}
	else{
		printf("Not Pallindrome number");
	}
	return 0;
}