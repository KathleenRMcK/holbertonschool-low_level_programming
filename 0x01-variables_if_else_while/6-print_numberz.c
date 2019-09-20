/**
 *main - print string of single digit base 10 numbers
 *
 *return: 0
 */
#include <stdio.h>
int main(void)
{
  int i;
  for(i = 48; i <= 57; i++)
    {
      putchar(i);
      {
	if(i == 57)
	  putchar('\n');
      }
    }
  return(0);
}
