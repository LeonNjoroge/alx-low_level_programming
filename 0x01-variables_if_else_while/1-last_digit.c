//OUTPUT - "Last digit of" , n , "is"
//Check last digit
//last digit  n > 5 - "and is greater than 5"
//last digit n == 0 - "and is 0"
//last digit n <6 and n != 0 - "and is less than 6 and not 0"


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
