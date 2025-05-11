#include <stdio.h>
#include <string.h>
int main() {
    char roman[20];
    int total = 0;
    int prev_value = 0;
    int current_value = 0;
    printf("Enter a Roman numeral: ");
    scanf("%s", roman);
    int length = strlen(roman);
    for (int i = length - 1; i >= 0; i--) {
        switch(roman[i]) {
            case 'I': current_value = 1; break;
            case 'V': current_value = 5; break;
            case 'X': current_value = 10; break;
            case 'L': current_value = 50; break;
            case 'C': current_value = 100; break;
            case 'D': current_value = 500; break;
            case 'M': current_value = 1000; break;
            default: current_value = 0; break;
        }
        if (current_value < prev_value) {
            total -= current_value;
        } else {
            total += current_value;
        }
        prev_value = current_value;
    }
    printf("The integer value is: %d\n", total);
    return 0;
}