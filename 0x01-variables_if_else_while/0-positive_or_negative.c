#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * Main -> assign a random number to the variable and each time it is execued an
 * and print out a number base on a condition
 * return :always zero
 *
 */






int main(void)

{
int n;



srand(time(0));

n = rand() - RAND_MAX / 2;
if (n>0)
     printf("%d is positive \n",n);
if (n==0)
     printf("%d is zero \n",n);
if (n<0)
{

     printf("%d is negative \n",n);
	                		  
}
return (0);


}


