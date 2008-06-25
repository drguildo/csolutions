#include <stdio.h>

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define LINE_FILE "Line " TOSTRING(__LINE__) " of file " __FILE__

int main() {
	const char *str = LINE_FILE;
	printf("%s\n", str);
	return 0;
}

