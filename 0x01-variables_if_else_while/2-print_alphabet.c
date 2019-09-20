/**
 *main - print lowercase alphabet using putchar
 *
 *return: 0
 */
#include <stdio.h>
int main(void)
  char n;
{
  for(n = 'a'; n <= 'z'; n++);
  {
  putchar(n);
  if(n == 'z')
    {
  putchar('\n');
    }    
  }
  return (0);
}
