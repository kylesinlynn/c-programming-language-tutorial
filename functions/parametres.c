#include <stdio.h>

int sum_up(int parametre1, int parametre2);

int main()
{
	int x, y, result;
	
	x = 3;
	y = 12;
	result = sum_up(x, y);
	printf("%d + %d = %d\n", x, y, result);

	return 0;
}

int sum_up(int parametre1, int parametre2)
{
	parametre1 += parametre2;
	return parametre1;
}
