/**
 *main - print lowercase alphabet using putchar
 *
 *return: 0
 */
#include <stdio.h>
int main(void)
{
  int n;
for (n = 'a'; n <= 'z'; n++)
  putchar(n);
  putchar('\n');
  return(0);
}
