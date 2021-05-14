#include <stdio.h>

int main()
{
	char tda[2][5] = {
						{'a', 'b', 'c', 'd', 'e'},
						{'A', 'B', 'C', 'D', 'E'},
					};
	
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 5; j++)
			printf("%c\n", tda[i][j]);

	return 0;
}
