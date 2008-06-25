#include <stdio.h>

int main() {
	int tens, units;

	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &tens, &units);

	printf("You entered the number ");

	switch(tens) {
		case 1:
			switch(units) {
				case 0:
					printf("ten.\n");
					return 0;
				case 1:
					printf("eleven.\n");
					return 0;
				case 2:
					printf("twelve.\n");
					return 0;
				case 3:
					printf("thirteen.\n");
					return 0;
				case 4:
					printf("fourteen.\n");
					return 0;
				case 5:
					printf("fifteen.\n");
					return 0;
				case 6:
					printf("sixteen.\n");
					return 0;
				case 7:
					printf("seventeen.\n");
					return 0;
				case 8:
					printf("eighteen.\n");
					return 0;
				case 9:
					printf("nineteen.\n");
					return 0;
			}
		case 2:
			printf("twenty");
			break;
		case 3:
			printf("thirty");
			break;
		case 4:
			printf("fourty");
			break;
		case 5:
			printf("fifty");
			break;
		case 6:
			printf("sixty");
			break;
		case 7:
			printf("seventy");
			break;
		case 8:
			printf("eighty");
			break;
		case 9:
			printf("ninety");
			break;
	}

	switch(units) {
		case 0:
			break;
		case 1:
			printf("-one");
			break;
		case 2:
			printf("-two");
			break;
		case 3:
			printf("-three");
			break;
		case 4:
			printf("-four");
			break;
		case 5:
			printf("-five");
			break;
		case 6:
			printf("-six");
			break;
		case 7:
			printf("-seven");
			break;
		case 8:
			printf("-eight");
			break;
		case 9:
			printf("-nine");
			break;
	}

	printf(".\n");

	return 0;
}
