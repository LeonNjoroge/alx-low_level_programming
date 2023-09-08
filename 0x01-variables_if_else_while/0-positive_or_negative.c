#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *
 *main - entry point of the program
 *
 *Description - assign a random number to the variable n each time it is executed.
 *
 *return - Always True (0)
 *
 *
 */

int main()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if(n > 0)
	{
	  printf("%d is positive\n",n);
	}
	else if(n == 0)
	{
	  printf("%d is zero\n",n);
	}
	else
	{
	  printf("%d is negative\n",n);
	}   

	
	return (0);
}
