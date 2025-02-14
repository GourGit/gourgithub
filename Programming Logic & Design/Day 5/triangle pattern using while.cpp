#include<stdio.h>
int main() {
    int i=1, j, k, num = 1;
    int rows = 4; 
    while(i <= rows) {
    	j = 1;
        while(j <= 2 * (rows - i)) {
            printf(" ");
            j++;
        }
        k = 1;
        while(k <= i) {
            printf("%d ", num);
            num++;
            k++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

