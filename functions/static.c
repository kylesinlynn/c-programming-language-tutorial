#include <stdio.h>

int vim()
{
	static int test = 0;
	test++;
	return test;
}

int main()
{
	for(int i = 0; i != 3; i++)
		printf("Static var: %d\n", vim());

	return 0;
}
