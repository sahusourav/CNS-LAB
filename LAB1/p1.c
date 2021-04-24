// wap that displays xor of each char of "Hello World" with 0
#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main()
{
	char str[16]= "Hello World", temp;
	int i = 0;
	printf("Exclusive OR with 0:\n");
	for(i = 0; str[i] != '\0'; i++)
	{
		temp = str[i] ^ 0;
		printf("%c", temp);
	}
	printf("\n");
	
	printf("OR with 0:\n");
	for(i = 0; str[i] != '\0'; i++)
	{
		temp = str[i] | 0;
		printf("%c", temp);
	}
	printf("\n");

	printf("AND with 0:\n");
	for(i = 0; str[i] != '\0'; i++)
	{
		temp = str[i] & 0;
		printf("%c", temp);
	}
	printf("\n");

	return 0;
}
