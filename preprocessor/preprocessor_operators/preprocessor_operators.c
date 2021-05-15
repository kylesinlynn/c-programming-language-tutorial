#include <stdio.h>
#define TO_STR(x) #x

int main()
{
  /*
   * # macro operator is called stringification or stringizing
   */

  printf("%s\n", TO_STR(123\\12));

  return 0;
}
