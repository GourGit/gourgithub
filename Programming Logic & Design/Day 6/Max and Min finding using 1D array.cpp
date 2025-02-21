#include<stdio.h>
int main(){
	int arr[8];
	printf("Enter elements in array: ");
	for(int i=0;i<8;i++){
		scanf("%d",&arr[i]);
	}
	
	int max = arr[0];
	int min = arr[0];
	
	for(int i=0; i<8;i++){
		if(arr[i] > max){
			max = arr[i];
		}
		if(arr[i] < min){
			min = arr[i];
		}
	}
	printf("The maximum number is: %d\n",max);
	printf("The minimum number is: %d\n",min);
	return 0;
}