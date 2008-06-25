#include <stdio.h>
#include <string.h>

int main() {
	char str[16];

	strcpy(str, "tire-bouchon");
	strcpy(&str[4], "d-or-wi");
	strcat(str, "red?");

	printf("%s\n", str); /* tired-or-wired? */

	return 0;
}

