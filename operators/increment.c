#include <stdio.h>

int main()
{
    /* Two types of increment operators
     * Pre-increment operator
     * Post-increment operator
     * */
    // Pre-increment operator
    int x = 1, y;
    ++x;
    // Do the operation first
    y = ++x/2;
    printf("Number: %i\n", y);

    // Post-increment operator
    x = 1, y = 0;
    // Do the operation later
    y = x++/2;
    printf("Number: %i\n", y);
    return 0;
}
