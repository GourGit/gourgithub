#include <stdio.h>

int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int low = 0, high = n - 1, mid;
    int result = -1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == x){
            result = mid;
            break;
        }
        if (arr[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(result == -1)
        printf("Element is not present in array");
    else
        printf("Element is present");
    return 0;
}
