/**                                                       *main - print string from 00 to 99 with comma and space  *                                                        *return: 0                                               */
#include <stdio.h>
int main(void)
{
  int i;
  for(i = 48; i <= 57; i++)
    putchar(i);
  putchar(i);
  if(i != 57)
    {
      putchar(',');
      putchar(' ');
    }
  putchar('\n');
  return(0);
}