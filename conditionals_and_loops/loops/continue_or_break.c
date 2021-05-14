#include <stdio.h>

int main()
{
	int i = 1;
	while(i < 10)
	{
		i++;
		if(i == 3)
		{
			printf("Skipping 3\n");
			continue;
		}
		if(i == 9)
		{
			printf("Break at 9\n");
			break;
		}
		printf("%i\n", i);
		//i++;
	}
	return 0;
}
