#include <stdio.h>

// Decleration
int square(int num);

int main()
{
	int x = 5, result;
	result = square(x); // calling function and initialised to a variable
	printf("%d squared is %d\n", x , result);

	return 0;
}

// Definition
int square(int num)
{
	return (num*num);
}

