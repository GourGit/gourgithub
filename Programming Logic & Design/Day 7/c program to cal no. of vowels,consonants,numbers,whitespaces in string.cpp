#include<stdio.h>
#include<string.h>
int main(){
	int vowels=0,consonants=0,num=0,spaces=0;
	char s1[100];
	gets(s1);
	
	for (int i = 0;s1[i] != '\0'; i++) {
        char ch = s1[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
        else if (ch >= '0' && ch <= '9') {
            num++;
        }
        else if (ch == ' ') {
            spaces++;
        }
    }
    printf("Vowels: %d",vowels);
    printf("Consonants: %d",consonants);
    printf("Numbers: %d",num);
    printf("White Spaces: %d",spaces);
    return 0;
}