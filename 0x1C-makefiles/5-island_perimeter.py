#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Calculate the perimeter of an island.


    The grid denotes water as 0 and land as 1.

    Parameters:
        grid (list): A nested list of integers representing the island.
    Returns:
        The perimeter of the specified island within the grid.
    """
    wid = len(grid[0])
    heig = len(grid)
    edg = 0
    size = 0

    for m in range(heig):
        for n in range(wid):
            if grid[m][n] == 1:
                size += 1
                if (n > 0 and grid[m][n - 1] == 1):
                    edg += 1
                if (m > 0 and grid[m - 1][n] == 1):
                    edg += 1
    return size * 4 - edg * 2
