#include <stdio.h>
#define VERY_LONG_CONSTANT \
  32.1231231
#define MAX 100
#define MIN 0
#    define SQUARE(x) \
  x*x

int main()
{
  /*
   * # must be first character to use as preprocessor directive
   * there can be any amount of space defore and between # and directive
   *
   * #directive is lengthy, you can use the '\'
   * continuation character to extend the definition
   * over more than one line.
   */


  return 0;
}
