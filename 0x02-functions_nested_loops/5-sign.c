/**
 *main - print sign of a number
 *
 *return: value of number
 */
#include "holberton.h"
int print_sign(int n)
int n
{
if(n = 0)
    {
    _putchar('0');
    else
    if(n > 0)
      {
	_putchar('+');
	else
	  if(n < 0)
	    {
	      _putchar('-');
	      return(-1);
	    }
	return(1);
      }
    return(0);
    }
}
