#include<stdio.h>
int main(){
	int a=5,b=2;
		a^=b^=a^=b;
		printf("a=%d and b=%d",a,b);
	return 0;
}