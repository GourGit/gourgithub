#include<stdio.h>
int gcd(int a,int b){
	if(b!=0){
		return gcd(b,a%b);
	}
	else{
		return a;
	}
}
int main(){
	int a,b;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	int num=gcd(a,b);
	printf("%d",num);
}