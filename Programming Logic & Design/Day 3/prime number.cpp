#include<stdio.h>
int main(){
	int n,c=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
		c++;
		break;
		}
		if(c==1){
			printf("Not Prime Number");
		}
		else{
			printf("Prime Number");
		}
	}
	return 0;
}