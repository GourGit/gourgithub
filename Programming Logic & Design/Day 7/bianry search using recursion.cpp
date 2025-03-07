#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[5], int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);
        return binarySearch(arr, mid + 1, high, x);
    }
    return -1;
}
int main() {
//    int arr[] = {2, 3, 4, 10, 20, 34, 44};
	int arr[5];
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter elements: ");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("Element not Found\n");
    else
        printf("Element Found\n");
    return 0;
}
