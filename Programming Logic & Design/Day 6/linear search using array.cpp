#include<stdio.h>
int main(){
	int arr[100],n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter elements in array: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int num=21;  
	//search linear elements
	for(int i=0;i<n;i++){
		if(arr[i] == num){
			printf("Element searched and found");
			break;
		}
		else{
			printf("Element not found");
			break;
		}
	}
	return 0;
}