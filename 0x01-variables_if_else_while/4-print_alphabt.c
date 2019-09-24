/**
 *main - print string a to z except q and e
 *
 *return: 0
 */
#include <stdio.h>
int main(void)
{
  char i;

  for(i = 'a'; i <= 'z'; i++)
    {
      if(i != 'q' && i != 'e')
      putchar (i);
    }
  putchar ('\n');
  return (0);
}
