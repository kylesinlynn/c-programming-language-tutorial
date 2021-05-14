#include <stdio.h>

int main()
{	
	char name[30];
	printf("Enter your name: ");
	fgets(name, sizeof(name), stdin);
	printf("fgets(var, sizeof(var), stdin) -> %s\n", name);

	return 0;
}
