#include <stdio.h>

int main()
{
	int num = 3;
	
	switch(num)
	{
	case 1:
		printf("Case 1\n");
		break;
	case 2:
		printf("Case 2\n");
		break;
	case 3:
		printf("Case 3\n");
		break;
	default:
		printf("Default\n");
	}

	num = 4;
	switch(num)
	{
	case 1:
	case 2:
	case 3:
		printf("Case 1 or 2 or 3\n");
		break;
	case 4:
	case 5:
	case 6:
		printf("Case 4 or 5 or 6\n");
		break;
	default:
		printf("Default\n");
	}

	return 0;
}
