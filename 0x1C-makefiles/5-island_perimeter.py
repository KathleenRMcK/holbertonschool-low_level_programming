#!/usr/bin/python3
"""
Island Perimeter
"""


def island_perimeter(grid):
    """ Function to find length of perimeter of island """
    perimeter = 0
    for lon in range(len(grid)):
        for lat in range(len(grid[lon])):
            if grid[lon][lat] == 1:
                if lon == 0:
                    perimeter = perimeter + 1
                if lat == 0:
                    perimeter = perimeter + 1
                if grid[lon - 1][lat] == 0:
                    perimeter = perimeter + 1
                if grid[lon][lat - 1] == 0:
                    perimeter = perimeter + 1
                if grid[lon + 1][lat] == 0:
                    perimeter = perimeter + 1
                if grid[lon][lat + 1] == 0:
                    perimeter = perimeter + 1
                if lon == len(grid) - 1:
                    perimeter = perimeter + 1
                if lat == len(grid[lon]) - 1:
                    perimeter = perimeter + 1
    return (perimeter)
