#include <stdio.h>

#define AVG(x,y) (((x)+(y))/2)
#define AREA(x,y) ((x)*(y))

int main() {
	printf("%d\n", AVG(2 > 1 ? 2 : 1, 4)); /* Should be: 3 */
	printf("%d\n", 12 / AREA(2, 2)); /* Should be: 3 */
	return 0;
}

