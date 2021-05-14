#include <stdio.h>

int main()
{
	int test_scores[25]; // an array size is 25
	float prices[5] = {3.2, 6.55, 10.49, 1.25, 0.99};
	//float prices[5] = {3.2, 6.55};
	
	// accessing array elements
	printf("%2.2f\n", prices[1]);
	
	// using loop
	for(int i = 0; i < 5; i++)
		printf("%2.2f\n", prices[i]);

	return 0;
}
