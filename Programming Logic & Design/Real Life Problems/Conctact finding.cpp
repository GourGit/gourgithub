#include<stdio.h>
#include<string.h>
int main(){
	char name[100][100];
	int phone_numbers[100];
	int n;
	printf("Enter number of contacts:\n");
	scanf("%d",&n);
	
	printf("Enter phone numbers and name for contacts:\n");
	for(int i=0;i<n;i++){
		printf("Enter Contact name:\n");
		scanf("%s", name[i]);
		getchar();
		printf("Enter Phone Number:\n");
		scanf("%d", &phone_numbers);
	}
	//Take the name of the contact which we want to find
	char Name_find[100];
	printf("Enter the contact name for searching:\n");
	scanf("%s", Name_find);
	//Check if the contact is present or not
	printf("\n********************\n");
	for(int i=0;i<n;i++){
		if(strcmp(Name_find,name[i])==0){
			printf("The Contact Found is:%s\n", name[i]);
			printf("The Phone number is:%d\n", phone_numbers[i]);
			break;
		}
		else{
			printf("Contact not found!\n");
			break;
		}
	}
	return 0;
}