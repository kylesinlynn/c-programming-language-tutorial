#include <stdio.h>

int main()
{
	int integer;
	printf("Enter an integer: ");
	scanf("%i", &integer);
	printf("scanf(type, memory_address) -> %i\n", integer);
	return 0;
}
