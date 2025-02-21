#include<stdio.h>

struct dist{
	int ft;
	int inc;
};
int main(){
	struct dist d1,d2,d3;
	
	printf("Enter distance 1 in feet and inches: ");
	scanf("%d%d",&d1.ft,&d1.inc);
	printf("Enter distance 2 in feet and inches: ");
	scanf("%d%d",&d2.ft,&d2.inc);
	
	d3.ft = d1.ft + d2.ft;
	d3.inc = d1.inc + d2.inc;
	
	if(d3.inc > 11){
		d3.inc -= 12;
		d3.ft++;
	}
	
	printf("The total distance is: %d feet and %d inches",d3.ft,d3.inc);
	return 0;
}