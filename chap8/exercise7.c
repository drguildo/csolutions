#include <stdio.h>

#define ARRAY_SIZE sizeof(message) / sizeof(message[0])

int main() {
	char message[100], ch;
	int i = 0;

	printf("Enter message: ");
	do {
		scanf("%c", &ch);
		message[i++] = ch;
	} while(i < ARRAY_SIZE && ch != '\n');

	printf("In B1FF-speak: ");
	for(i = 0; message[i] != '\n'; i++) {
		if(message[i] >= 'a' && message[i] <= 'z')
			message[i] = 'A' + (message[i] - 'a');
		switch(message[i]) {
			case 'A':
				message[i] = '4';
				break;
			case 'B':
				message[i] = '8';
				break;
			case 'E':
				message[i] = '3';
				break;
			case 'I':
				message[i] = '1';
				break;
			case 'O':
				message[i] = '0';
				break;
			case 'S':
				message[i] = '5';
				break;
		}
		printf("%c", message[i]);
	}

	printf("!!!!!!!!!!\n");

	return 0;
}

