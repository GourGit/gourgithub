#include<stdio.h>
int fact(int n){
	int sum=1;
	for(int i=1;i<=n;i++){
		sum=sum*i;
	}
	return sum;	
}
int main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	int num=fact(n);
	printf("The factorial is: %d",num);
	return 0;
}