/**
 *main - print a to z and A to Z
 *
 *return (0)
 */
#include <stdio.h>
int main(void)
{
  int i;
  int j;
  for(i = 'a'; i <= 'z'; i++)
    putchar (i);
  for(j = 'A'; j <= 'Z'; j++)
    putchar (j);
  putchar ('\n');
  return (0);
}
