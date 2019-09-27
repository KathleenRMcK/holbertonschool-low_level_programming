/**
 * main - print 1 to 100 with mult of 3 with Fizz
 * and mult of 5 with Buzz. Both print FizzBuzz
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if ((num % 3 == 0) && (num % 5 == 0))
printf("FizzBuzz");
else
if (num % 3 == 0)
printf("Fizz");
else
if (num % 5 == 0)
printf("Buzz");
else
printf("%d", num);
if (num < 100)
printf(" ");
else
printf("\n");
}
return (0);
}
