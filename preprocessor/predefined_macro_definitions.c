#include <stdio.h>
#include <string.h>

int main()
{
  /*
   * __DATE__ current date as string (mm-dd-yyyy)
   * __TIME__ current time as string (hh:mm:ss)
   * __FILE__ current filename as string
   * __LINE__ current line number as an int
   * __STDC__ 1
   */
  
  char curr_time[10], curr_date[12];
  int std_c;

  strcpy(curr_time, __TIME__);
  strcpy(curr_date, __DATE__);
  printf("%s %s\n", curr_time, curr_date);
  printf("This is line %d\n", __LINE__);
  std_c = __STDC__;
  printf("STDC is %d\n", std_c);

  return 0;
}
