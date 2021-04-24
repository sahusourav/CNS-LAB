// wap that contains a string(char pointer) with a value "Hello World". The program should AND, OR and XOR each character in this 
// string with 127 and display the result


#include<stdio.h>

int main()
{
	char str[16]= "Hello World", temp;
	int i = 0;
	printf("Exclusive OR with 127:\n");
	for(i = 0; str[i] != '\0'; i++)
	{
		temp = str[i] ^ 127;
		printf("%c", temp);
	}
	printf("\n");
	
	printf("OR with 127:\n");
	for(i = 0; str[i] != '\0'; i++)
	{
		temp = str[i] | 127;
		printf("%c", temp);
	}
	printf("\n");

	printf("AND with 127:\n");
	for(i = 0; str[i] != '\0'; i++)
	{
		temp = str[i] & 127;
		printf("%c", temp);
	}
	printf("\n");

	return 0;
}
