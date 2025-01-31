#include<stdio.h>
int fibo(int a,int b,int sum,int n){
	if(n!=0){
		printf("%d",a);
		sum=a+b;
		a=b;
		b=sum;
		n--;
		fibo(a,b,sum,n);
	}
	else{
		return a;
	}
		
}
int main(){
	int n,a=0,b=1,sum=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	fibo(a,b,sum,n);
	return 0;
}