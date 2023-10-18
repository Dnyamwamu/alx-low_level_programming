#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random digit between 0 and 9
int generateRandomDigit() {
	return rand() % 10;
}
int main() {
	rand(time(NULL));
	int passwordLength = 8;
	char password[passwordLength + 1];

	for (int i = 0; i < passwordLength; i++)
	{
		password[i] = '0' + generateRandomDigit();
	}
	password[passwordLength] = '\0';
	printf("Generated Password: %s\n", password);
	return 0;
}
