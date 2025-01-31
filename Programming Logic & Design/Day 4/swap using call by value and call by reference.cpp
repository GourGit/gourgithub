#include<stdio.h>
void swap_value(int a,int b){
	a=a^b;
	b=a^b;
	a=a^b;
	printf("Values after swaping \na=%d and b=%d\n",a,b);
}
void swap_reference(int *a,int *b){
	*a=*a^*b;
	*b=*a^*b;
	*a=*a^*b;
	printf("Value after swaping \na=%d and b=%d\n",*a,*b);
}
int main(){
	int a,b;
	printf("Enter two number for variable \na and b: ");
	scanf("%d%d",&a,&b);
	printf("Swaping using Call by Value");
	printf("a=%d and b=%d\n",a,b);
	swap_value(a,b);
	printf("Swaping using Call by Reference");
	printf("a=%d and b=%d\n",a,b);
	swap_reference(&a,&b);
	return 0;
}
