#include <stdio.h>

/* Flawed Macro Definition */
#define SQUARE(x) x * x

int main(void)
{
	int a = 3 + 2;
	int b = 5;

	printf("Result of SQUARE(3 + 2): %d\n", SQUARE(3 + 2));
	printf("Result of SQUARE(b): %d\n", SQUARE(b));

	return (0);
}
