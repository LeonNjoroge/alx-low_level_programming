#include "main.h"
#include <stdio.h>

void print_to_98(int num)
{
	while (num != 98)
	{
		printf("%d, ", num);
		if (num < 98)
			num++;
		else
			num--;
	}
	printf("%d\n", num);
}
