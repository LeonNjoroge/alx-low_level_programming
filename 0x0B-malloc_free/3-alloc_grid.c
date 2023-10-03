#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
  int i, j;
  int **grid;

  
  if (width <= 0 || height <= 0)
    return (NULL);

  grid = malloc(height * sizeof(int *));

  if (grid == NULL)
    {
      return (NULL);
    }

  i = 0;
  j = 0;
  
  for (; i < height; i++)
    {
      grid[i] = malloc(width * sizeof(int));
      if (grid[i] == NULL)
	{
	  for (; j < i; j++)
	    {
	      free(grid[j]);
	    }
	  free(grid);
	  return (NULL);
	}
      j = 0;
      for (; j < width; j++)
	{
	  grid[i][j] = 0;
	}
    }
  return (grid);
}
