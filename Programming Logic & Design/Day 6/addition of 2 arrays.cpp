#include<stdio.h>
int main(){
	int arr1[100][100],arr2[100][100],arr3[100][100];
	
	printf("Enter elements of 1st Array: \n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("Enter elements of 2nd Array: \n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	printf("\n");
	printf("*****************\n");
	//The result
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
	return 0;
}