#include<stdio.h>
int main(){
	int year;
	printf("Enter year: ");
	scanf("%d",&year);
	if(year%400==0)
	printf("Leap year");
	else if(year%100==0)
	printf("Not leap yaer");
	else if(year%4==0)
	printf("Leap year");
	else
	printf("Leap year");
	return 0;
}