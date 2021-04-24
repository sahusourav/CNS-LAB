// Write a C program to perform encryption and decryption using:
// A) mono alphabetic cipher

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
	char pt[30], c[27], ct[30];
	int i, j, index, flag[26];
	printf("Implement Mono Alphabetic Cipher Encrytption-Decryption.\n");
	printf("Enter Plain Text: ");
	scanf("%s", pt);
	
	// Encryption
	int size = strlen(pt);

	for(i = 0; i < 26; i++)
		flag[i] = 0;
	
	int a;
	srand(time(0));

	for(i = 0; i < 26; i++)
	{
		a = rand() % 26;
		while(flag[a])	
			a = rand() % 26;
		flag[a] = 1;
		c[i] = (char)(a + 97);
	}
	printf("\nKeys from a to z:\n");
	for(i = 0; i < 26; i++)
		printf("%c - %c\n", i + 97, c[i]);
	
	for(i = 0; i < strlen(pt); i++)
	{
		index = pt[i] - 97;
		ct[i] = c[index];
	}

	printf("\nCipher Text is:\t");
	for(i = 0; i < strlen(pt); i++)
	{
		printf("%c", ct[i]);
	}
	printf("\n");
	
	// Decryption
	 char dt[30];
	 i = 0;
	 while(i < size)
	 {
		a = 0;
	 	while(a != 26)
		{
			if(c[a] == ct[i])
			{
				dt[i] = a + 97;
				break;
			}

			a++;
		}
		i++;
	 }
	 dt[i] = '\0';

	 printf("Decrypted string: %s\n", dt);

	return 0;
}
