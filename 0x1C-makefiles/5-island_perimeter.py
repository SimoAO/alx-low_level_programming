#!/usr/bin/python3
"""An Island Perimeter module"""


def island_perimeter(grid):
    """A function that returns the perimeter of the island
    described in grid"""

    count = 0
    corner = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                count += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    corner += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    corner += 1
    return count * 4 - corner * 2
