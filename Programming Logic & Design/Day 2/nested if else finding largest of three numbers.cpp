#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c)
		printf("A value %d is greater",a);
		else
		printf("C value %d is greater",c);
	}
	else if(b>a){
		if(b>c)
		printf("B value %d is greater",b);
		else
		printf("C value %d is greater",c);
	}
	else
	printf("C value %d is greater",c);
	return 0;
}