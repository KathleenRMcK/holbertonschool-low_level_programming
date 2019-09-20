/**
 *main - print a to z and A to Z
 *
 *return (0)
 */
#include <stdio.h>
int main(void)
{
  char i;

  for(i = 'a'; i <= 'z'; i++)
    purchar (i);
  for(i = 'A'; i <= 'Z'; i++)
    putchar (i);
  putchar ('\n');
  return (0);
}
