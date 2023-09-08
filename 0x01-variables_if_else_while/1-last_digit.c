#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main()
{
        int n;
	int n_last;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        n_last = n % 10;
        if (n_last > 5)
        {
          printf ("Last digit of %d is %d and is greater than 5 ", n, n_last);
        }
	else if (n_last == 0)
        {
	  printf ("Last digit of %d is %d and is 0 ", n, n_last);
	}
	else if (n_last <6 && n_last != 0)
	{
	  printf ("Last digit of %d is %d and is less than 6 and not 0 ", n, n_last);
	}	
        return (0);
}
