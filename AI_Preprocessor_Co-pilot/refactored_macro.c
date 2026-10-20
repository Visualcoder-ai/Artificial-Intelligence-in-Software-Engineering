#include <stdio.h>

/* Refactored Safe Macro Definition */
#define SQUARE(x) ((x) * (x))

int main(void)
{
	int b = 5;

	printf("Square of (3 + 2): %d\n", SQUARE(3 + 2));
	printf("Square of %d: %d\n", b, SQUARE(b));

	return (0);
}
