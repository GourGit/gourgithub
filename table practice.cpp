#include <stdio.h>
int main()
{
	int num,i;
	//Take the nu32mber as an input from the user
	printf("Enter the value of number whose multiplication table is to be printed\n");
	scanf("%d",&num);
	printf("The multiplication table of %d is\n",num);
	for(i=1; i<=10; i++)
	{
		printf("%d * %d = %d\n",num,i,i*num);
	}
	
	return 0;
}
