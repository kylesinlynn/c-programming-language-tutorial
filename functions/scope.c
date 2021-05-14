#include <stdio.h>

int global_variable = 0;

int main()
{
	int local_variable;
	local_variable = 3;
	printf("Local: %d\nGlobal: %d\n", local_variable, global_variable); 

	return 0;
}
