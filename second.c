//wacp to find the biggest element using array
#include <stdio.h>
int main(){
	int n;
	int a[100];
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the value in array: ",n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int biggest=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>biggest){
			biggest=a[i];
		
		}
		
	}
	printf("%d is the biggest number",biggest);
	return 0;
}