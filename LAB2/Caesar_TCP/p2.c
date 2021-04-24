// Write a C program to encrypt and decrypt a message using Caesar Cipher.

#include <stdio.h>

void encrypt(char message[], int key, int flag)
{
	int i;
	char ch;

	for(i = 0; message[i] != '\0'; ++i)
	{
		ch = message[i];

		if(ch >= 'a' && ch <= 'z')
		{
			ch += key;
			if(ch > 'z')
				ch = ch - 'z' + 'a' - 1;
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z')
		{
			ch += key;
			if(ch > 'Z')
				ch = ch - 'Z' + 'A' - 1;
			message[i] = ch;
		}
	}
	if(flag)
		printf("Encrypted message: %s\n", message);
	else
		printf("Decrypted message: %s\n", message);
}

int main()
{
	char message[100];
	int key;

	printf("Enter a message to encrypt>>\n");
	fgets(message, 100, stdin);

	printf("Enter key>>\n");
	scanf("%d", &key);

	encrypt(message, key, 1);

	encrypt(message, -key, 0);

	return 0;
}
