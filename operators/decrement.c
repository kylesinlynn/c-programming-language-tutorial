#include <stdio.h>

int main()
{
	/* Two types of decrement operators
	*  Pre-decrement operator
	*  Post-decrement operator
	*/
	int x = 5, y;
	y = --x/2;
	printf("Number: %i\n", x, y);
	
	y = x--/2;
	printf("Number: %i %i\n", x, y);

	return 0;
}
