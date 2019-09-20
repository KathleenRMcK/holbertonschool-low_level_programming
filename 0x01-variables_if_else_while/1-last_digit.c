#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  int i;  
  printf("Last digit of %n is", n);

  if(i == 0)
  {
    printf("%n and is 0\n", n);
  }
  else if(i < 6; i =/= 0)
  {
    printf("%n and is less than 6 and not 0\n", n);
  }

  return (0);
}
