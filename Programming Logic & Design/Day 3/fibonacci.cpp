#include<stdio.h>
int main(){
	int a=0,b=1,n,fibo;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("%d",a);
		fibo=a+b;
		a=b;
		b=fibo;
	}
	return 0;
}