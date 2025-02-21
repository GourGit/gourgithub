#include<stdio.h>
struct complex_No{
	int real;
	int img;
};

int main(){
	struct complex_No num1,num2,result;

	printf("Enter the 1st complex number: ");
	scanf("%d%d",&num1.real,&num1.img);
	printf("Enter 2nd complex number: ");
	scanf("%d%d",&num2.real,&num2.img);
	//Cal the result
	result.real = num1.real + num2.real;
	result.img = num1.img + num2.img;
	//print the result
	printf("The complex number by adding 2 numbers is:\n %d+%di\n",result.real,result.img);
	return 0;
}