#include <stdio.h>

void censor(char *);

int main() {
	char str[] = "food fool";

	censor(str);

	printf("%s\n", str);

	return 0;
}

void censor(char *str) {
	int i;

	while(*str) {
		for(i = 0; i < 3; i++)
			if(!str[i])
				return;
		if(str[0] == 'f' && str[1] == 'o' && str[2] == 'o') {
			str[0] = str[1] = str[2] = 'x';
			str += 3;
			continue;
		}
		str++;
	}
}

