#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[])
{
	int cent, coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

        for (;cent > 0; coins += 1)
	{
		if (cent >= 25)
			cent -= 25;
		else if (cent >= 10)
			cent -= 10;
		else if (cent >= 5)
			cent -= 5;
		else if (cent >= 2)
			cent -= 2;
		else if (cent >= 1)
			cent -= 1;
		
	}
	printf("%d\n", coins);
	return (0);
}
