#include<stdio.h>
int fibo(int s,int a,int b,int n){
	if(n!=0){
		for(int i=1;i<=n;i++){
		printf("%d \t",a);
		s=a+b;
		a=b;
		b=s;
		}
	}
	else{
		return a;
	}
}
int main()
{
	int n,a=0,b=1,s=0;
	printf("Enter number: ");
	scanf("%d",&n);
	fibo(s,a,b,n);
}