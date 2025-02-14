#include<stdio.h>
int main(){
	int n,c=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	if(n<=0){
		printf("Not prime number");
		return 0;
	}
	int i=2;
	while(i<=n/2){
		if(n%i==0){
			c++;
			break;
		}
		i++;
	}
	if(c==1){
		printf("Not prime number");
	}
	else{
		printf("Prime number");
	}
	return 0;
}