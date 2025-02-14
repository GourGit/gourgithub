#include<stdio.h>
int main(){
	int a=0,b=1,n,fibo;
	printf("Enter any number: ");
	scanf("%d",&n);
	int i=1;
	while(i<=n){
		printf("%d\t",a);
		fibo=a+b;
		a=b;
		b=fibo;
		i++;
	}
	return 0;
}