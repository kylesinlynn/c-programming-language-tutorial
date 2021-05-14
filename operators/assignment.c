#include <stdio.h>

int main()
{
	int i = 5;

	i += 1;
	printf("%i\n", i);
	i -= 1;
	printf("%i\n", i);
	i *= 2;	
	printf("%i\n", i);
	i /= 5;
	printf("%i\n", i);
	i %= 2;
	printf("%i\n", i);

	return 0;
}
