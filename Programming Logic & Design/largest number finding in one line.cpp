#include<stdio.h>
int main(){
	int a=5,b=6,c=7;
	if((a>b)?(a>c)? printf("A is large"):printf("C is large") : (b>c)? printf("B is large"):printf("C is large"))
	return 0;
}