#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -entry point
 *
 * Return :always return 0
 *
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - Rand_Max / 2;
if (n < 2)
printf("%d is negative \n", n);
else if (n == 0)
{
printf("%d is zero \n", n);
}
else
{
printf("%d ia positive \n", n);
}
return (0);
}
